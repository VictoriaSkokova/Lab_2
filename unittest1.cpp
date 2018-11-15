#include "stdafx.h"
#include "CppUnitTest.h"
#include "../Lab_Alg2/LinkedList.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest
{		
	TEST_CLASS(UnitTest1)
	{
	public:

		TEST_METHOD(isEmpty)
		{
			LinkedList list;
			Assert::IsTrue(list.isEmpty());
		}
		
		TEST_METHOD(at)
		{
			LinkedList list;
			list.push_back(1);
			list.push_back(2);
			list.push_back(3);
			list.push_back(4);

			Assert::IsTrue(list.at(0) == 1 && list.at(1) == 2 && list.at(2) == 3 && list.at(3) == 4);
		}
			TEST_METHOD(push_back)
			{
				LinkedList list;
				list.push_front(2);
				list.push_front(1);
				list.push_back(3);
				list.push_back(4);
				Assert::IsTrue(list.at(2) == 3); 
			}

			TEST_METHOD(push_back_empty)
			{
				LinkedList list;
				list.push_back(3);
				list.push_back(4);
				Assert::IsTrue(list.at(0) == 3);
			}


			TEST_METHOD(push_front)
			{
				LinkedList list;
				list.push_back(3);
				list.push_back(4);
				list.push_front(2);
				list.push_front(1);
				Assert::IsTrue(list.at(1) == 2); 
			}

			TEST_METHOD(push_front_empty)
			{
				LinkedList list;
				list.push_front(2);
				list.push_front(1);
				Assert::IsTrue(list.at(1) == 2);  
			}

			TEST_METHOD(equals)
			{
				LinkedList list1;
				list1.push_back(1);
				list1.push_back(2);
				list1.push_back(3);
				list1.push_back(4);

				LinkedList list2;
				list2.push_front(4);
				list2.push_front(3);
				list2.push_front(2);
				list2.push_front(1);

				Assert::IsTrue(list1.equals(&list2));
			}

			TEST_METHOD(equals_empty)
			{
				LinkedList list1;
				LinkedList list2;
				Assert::IsTrue(list1.equals(&list2));
			}


			TEST_METHOD(pop_front)
			{
				LinkedList list1;
				list1.push_back(1);
				list1.push_back(2);
				list1.push_back(3);
				list1.push_back(4);

				LinkedList list2;
				list2.push_back(2);
				list2.push_back(3);
				list2.push_back(4);

				list1.pop_front();

				Assert::IsTrue(list1.equals(&list2));
			}

			TEST_METHOD(pop_front_empty)
			{
				LinkedList list1;
				list1.push_back(1);

				list1.pop_front();

				Assert::IsTrue(list1.isEmpty());
			}

			TEST_METHOD(pop_front_is_empty)
			{
				LinkedList list1;

				list1.pop_front();

				Assert::IsTrue(list1.isEmpty());
			}


			TEST_METHOD(pop_back)
			{
				LinkedList list1;
				list1.push_back(1);
				list1.push_back(2);
				list1.push_back(3);
				list1.push_back(4);

				LinkedList list2;
				list2.push_back(1);
				list2.push_back(2);
				list2.push_back(3);

				list1.pop_back();

				Assert::IsTrue(list1.equals(&list2));
			}

			TEST_METHOD(pop_back_is_empty)
			{
				LinkedList list1;
				list1.push_back(1);

				list1.pop_back();

				Assert::IsTrue(list1.isEmpty());
			}

			TEST_METHOD(pop_back_is_empty_2)
			{
				LinkedList list1;

				list1.pop_back();

				Assert::IsTrue(list1.isEmpty());
			}

			TEST_METHOD(insert_middle)
			{
				LinkedList list1;
				list1.push_back(1);
				list1.push_back(3);
				list1.push_back(4);

				LinkedList list2;
				list2.push_back(1);
				list2.push_back(2);
				list2.push_back(3);
				list2.push_back(4);

				list1.insert(2, 1); // 1 2 3 4

				Assert::IsTrue(list1.equals(&list2));
			}


			TEST_METHOD(insert_beg)
			{
				LinkedList list1;
				list1.push_back(2);
				list1.push_back(3);
				list1.push_back(4);

				LinkedList list2;
				list2.push_back(1);
				list2.push_back(2);
				list2.push_back(3);
				list2.push_back(4);

				list1.insert(1, 0); // 1 2 3 4

				Assert::IsTrue(list1.equals(&list2));
			}

			TEST_METHOD(insert_end)
			{
				LinkedList list1;
				list1.push_back(1);
				list1.push_back(2);
				list1.push_back(3);

				LinkedList list2;
				list2.push_back(1);
				list2.push_back(2);
				list2.push_back(3);
				list2.push_back(4);

				list1.insert(4, 3); // 1 2 3 4

				Assert::IsTrue(list1.equals(&list2));
			}

			TEST_METHOD(insert_empty)
			{
				LinkedList list1;
				

				LinkedList list2;
				list2.push_back(1);
				

				list1.insert(1, 1); 

				Assert::IsTrue(list1.equals(&list2));
			}


			TEST_METHOD(remove_middle)
			{
				LinkedList list1;
				list1.push_back(1);
				list1.push_back(2);
				list1.push_back(3);
				list1.push_back(4);

				LinkedList list2;
				list2.push_back(1);
				list2.push_back(2);
				list2.push_back(4);

				list1.remove(2);

				Assert::IsTrue(list1.equals(&list2));
			}

			TEST_METHOD(remove_empty)
			{
				LinkedList list1;

				list1.remove(2);

				Assert::IsTrue(list1.isEmpty());
			}


			TEST_METHOD(remove_beg)
			{
				LinkedList list1;
				list1.push_back(1);
				list1.push_back(2);
				list1.push_back(3);
				list1.push_back(4);

				LinkedList list2;
				list2.push_back(2);
				list2.push_back(3);
				list2.push_back(4);

				list1.remove(0);

				Assert::IsTrue(list1.equals(&list2));
			}

			TEST_METHOD(remove_end)
			{
				LinkedList list1;
				list1.push_back(1);
				list1.push_back(2);
				list1.push_back(3);
				list1.push_back(4);

				LinkedList list2;
				list2.push_back(1);
				list2.push_back(2);
				list2.push_back(3);

				list1.remove(3);

				Assert::IsTrue(list1.equals(&list2));
			}

			TEST_METHOD(get_size_0)
			{
				LinkedList list;
				Assert::IsTrue(list.get_size() == 0);
			}

			TEST_METHOD(get_size)
			{
				LinkedList list;
				list.push_back(1);
				list.push_back(2);
				list.push_back(3);
				list.push_back(4);
				Assert::IsTrue(list.get_size() == 4);
			}

			TEST_METHOD(clear)
			{
				LinkedList list;
				list.push_back(1);
				list.push_back(2);
				list.push_back(3);
				list.push_back(4);

				list.clear();
				Assert::IsTrue(list.isEmpty());
			}

			TEST_METHOD(clear_empty)
			{
				LinkedList list;

				list.clear();
				Assert::IsTrue(list.isEmpty());
			}

			TEST_METHOD(set)
			{
				LinkedList list1;
				list1.push_back(1);
				list1.push_back(1);

				LinkedList list2;
				list2.push_back(1);
				list2.push_back(2);

				list1.set(1, 2);

				Assert::IsTrue(list1.equals(&list2));
			}

			TEST_METHOD(set_empty)
			{
				LinkedList list1;

				list1.set(1, 2);

				Assert::IsTrue(list1.isEmpty());
			}

			TEST_METHOD(contains_true)
			{
				LinkedList list1;
				list1.push_back(1);
				list1.push_back(2);
				list1.push_back(3);
				list1.push_back(4);

				LinkedList list2;
				list2.push_back(1); 
				list2.push_back(2);
				list2.push_back(3);

				Assert::IsTrue(list1.contains(&list2));
			}
			TEST_METHOD(contains_itself_1)
			{
				LinkedList list1;
				list1.push_back(1);
				list1.push_back(2);
				list1.push_back(3);
				list1.push_back(4);

				LinkedList list2;
				list2.push_back(1);
				list2.push_back(2);
				list2.push_back(3);
				list2.push_back(4);

				Assert::IsTrue(list1.contains(&list2));
			}

			TEST_METHOD(contains_empty)
			{
				LinkedList list1;
				list1.push_back(1);
				list1.push_back(2);
				list1.push_back(3);
				list1.push_back(4);

				LinkedList list2;


				Assert::IsTrue(list1.contains(&list2));
			}

			TEST_METHOD(contains_itself)
			{
				LinkedList list1;
				list1.push_back(1);
				list1.push_back(2);
				list1.push_back(3);
				list1.push_back(4);


				Assert::IsTrue(list1.contains(&list1));
			}

			TEST_METHOD(contains_false)
			{
				LinkedList list1;
				list1.push_back(1);
				list1.push_back(2);
				list1.push_back(3);
				list1.push_back(4);

				LinkedList list2;
				list2.push_back(1);
				list2.push_back(3);
				list2.push_back(3);

				Assert::IsFalse(list1.contains(&list2));
			}

			TEST_METHOD(error_insert_negative_index)
			{
				LinkedList list1;
				char error;
				try
				{
					list1.insert(-1, 1);
				}
				catch (const std::out_of_range& error)
				{
					Assert::AreEqual("Wrong index", error.what());
				}
			}

			TEST_METHOD(error_insert_huge_index)
			{
				LinkedList list1;
				char error;
				try
				{
					list1.insert(5, 1);
				}
				catch (const std::out_of_range& error)
				{
					Assert::AreEqual("Wrong index", error.what());
				}
			}

			TEST_METHOD(error_at_negative_index)
			{
				LinkedList list1;
				char error;
				try
				{
					list1.at(-1);
				}
				catch (const std::out_of_range& error)
				{
					Assert::AreEqual("Wrong index", error.what());
				}
			}

			TEST_METHOD(error_at_huge_index)
			{
				LinkedList list1;
				char error;
				try
				{
					list1.at(5);
				}
				catch (const std::out_of_range& error)
				{
					Assert::AreEqual("Wrong index", error.what());
				}
			}


			TEST_METHOD(error_remove_negative_index)
			{
				LinkedList list1;
				char error;
				try
				{
					list1.remove(-1);
				}
				catch (const std::out_of_range& error)
				{
					Assert::AreEqual("Wrong index", error.what());
				}
			}

			TEST_METHOD(error_remove_huge_index)
			{
				LinkedList list1;
				char error;
				try
				{
					list1.remove(6);
				}
				catch (const std::out_of_range& error)
				{
					Assert::AreEqual("Wrong index", error.what());
				}
			}

			TEST_METHOD(error_set_negative_index)
			{
				LinkedList list1;
				char error;
				try
				{
					list1.set(-1, 1);
				}
				catch (const std::out_of_range& error)
				{
					Assert::AreEqual("Wrong index", error.what());
				}
			}

			TEST_METHOD(error_set_huge_index)
			{
				LinkedList list1;
				char error;
				try
				{
					list1.set(7, 1);
				}
				catch (const std::out_of_range& error)
				{
					Assert::AreEqual("Wrong index", error.what());
				}
			}
	};
}