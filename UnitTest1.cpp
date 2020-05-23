#include "pch.h"
#include "CppUnitTest.h"
#include "Head.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest
{
	TEST_CLASS(UnitTest)
	{
	public:

		TEST_METHOD(testEncodingFileNotOpen)
		{
			string test = "C:/Users\Art\Desktop";
			try
			{
				EncodingHuffman myEncoding(test);
				myEncoding.encoding();
			}
			catch (domain_error error)
			{
				Assert::AreEqual("Domain error", error.what());
			}


		}

		TEST_METHOD(testDecodingMissingTree)
		{
			string test = "C:/Users\Art\Desktop";
			try
			{
				EncodingHuffman myEncoding(test);
				myEncoding.decoding();
			}
			catch (out_of_range error)
			{
				Assert::AreEqual("Missing Decoding Tree", error.what());
			}


		}
	};
}
