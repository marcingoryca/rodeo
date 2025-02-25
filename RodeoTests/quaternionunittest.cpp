#include "stdafx.h"
#include "CppUnitTest.h"
#include "../include/math/quaternion.h"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;


namespace rodeotests
{
	TEST_CLASS(QuaternionUnitTest)
	{
	public:
		QuaternionUnitTest()
			:_quat(nullptr)
		{}

		// Testing default construction of a quaternion
		TEST_METHOD(TestQuaternionDefaultConstructor)
		{
			_quat = std::unique_ptr<rodeo::math::Quaternion>(new rodeo::math::Quaternion);

			Assert::AreEqual(0.0f, _quat->getX());
			Assert::AreEqual(0.0f, _quat->getY());
			Assert::AreEqual(0.0f, _quat->getZ());
			Assert::AreEqual(1.0f, _quat->getW());
		}

		// Testing creating quaternion by a vector
		TEST_METHOD(TestQuaternionConstructionByVector4)
		{

			rodeo::math::Vector4 v(1.0f, 1.0f, 3.0f, 2.0f);
			rodeo::math::Quaternion q(v);
			
			Assert::AreEqual(1.0f, q.getX());
			Assert::AreEqual(1.0f, q.getY());
			Assert::AreEqual(3.0f, q.getZ());
			Assert::AreEqual(2.0f, q.getW());
		}

		// Testing creation a quaternion by vector and a number
		TEST_METHOD(TestQuaternionConstructionByVectorByNumber)
		{
			float number = 1.0f;
			rodeo::math::Vector3 v(1.0f, 2.0f, 3.0f);
			_quat = std::unique_ptr<rodeo::math::Quaternion>(new rodeo::math::Quaternion(v, number));
		
			Assert::AreEqual(1.0f, _quat->getX());
			Assert::AreEqual(2.0f, _quat->getY());
			Assert::AreEqual(3.0f, _quat->getZ());
			Assert::AreEqual(1.0f, _quat->getW());
		}

		// Testing Constructing quaternion from four scalars
		TEST_METHOD(TestQuaternionConstructionFromFourScalars)
		{
			_quat = std::unique_ptr<rodeo::math::Quaternion>(new rodeo::math::Quaternion(-1.0f, 0.0f, 1.0f, 1.0f));

			Assert::AreEqual(-1.0f, _quat->getX());
			Assert::AreEqual(0.0f, _quat->getY());
			Assert::AreEqual(1.0f, _quat->getZ());
			Assert::AreEqual(1.0f, _quat->getW());
		}

		// Testing Positive Identity of a quaternion
		TEST_METHOD(TestQuaternionIdentity)
		{
			_quat = std::unique_ptr<rodeo::math::Quaternion>(new rodeo::math::Quaternion);
			_quat->identity();

			Assert::AreEqual(0.0f, _quat->getX());
			Assert::AreEqual(0.0f, _quat->getY());
			Assert::AreEqual(0.0f, _quat->getZ());
			Assert::AreEqual(1.0f, _quat->getW());
		}

		// Testing Negative Identity of a quaternion
		TEST_METHOD(TestQuaternionNegativeIdentity)
		{
			_quat = std::unique_ptr<rodeo::math::Quaternion>(new rodeo::math::Quaternion);
			_quat->negativeIdentity();

			Assert::AreEqual(0.0f, _quat->getX());
			Assert::AreEqual(0.0f, _quat->getY());
			Assert::AreEqual(0.0f, _quat->getZ());
			Assert::AreEqual(-1.0f, _quat->getW());
		}

		// Testing Quaternion Rotation about X-axis
		TEST_METHOD(TestQuaternionRotateAboutXAxis)
		{
			_quat = std::unique_ptr<rodeo::math::Quaternion>(new rodeo::math::Quaternion(1.0f, 1.0f, 3.0f, -2.0f));

			_quat->rotateAboutX(90.0f);
			//X = 0.707 (sin of 45.0f) degrees / 0.850f radians
			//W = 0.707 (cos of 45.0f) degrees / 0.850f radians

			Assert::AreEqual(48.7f, _quat->getX(), 0.5f);
			Assert::AreEqual(48.7f, _quat->getW(), 0.5f);
			Assert::AreEqual(0.0f, _quat->getY());
			Assert::AreEqual(0.0f, _quat->getZ());
		}

		// Testing Quaternion Rotation about Y-axis
		TEST_METHOD(TestQuaternionRotationAboutYAxis)
		{

		}
	private:
		std::unique_ptr<rodeo::math::Quaternion> _quat;
	};
}