

/**
 * TODO: Complete these class definitions
 */

/// Starter includes (YW)
#include "MyDetector.hpp"
#include "MyStack.hpp"
#include "MyQueue.hpp"
#include <cctype>
//
namespace CPSC131::PalindromeDetector
{
	/// YOUR WELCOME
	MyDetector::MyDetector() {}
	
	//
	bool MyDetector::isPalindrome(std::string s)
	{
		
		CPSC131::MyStack<char> stack;
		CPSC131::MyQueue<char> queue;
		// for(std::string::iterator itr = s.begin(); itr != s.end(); itr++)
		// {
		// 	stack.push(s.at(i));
		// }
		for (size_t i = 0; i < s.length(); i++)
		{
			tolower(s.at(i));
		}
		
		for (size_t i = 0; i < s.length(); i++)
		{
			stack.push(s.at(i));
		}
		for (size_t i = 0; i < s.length(); i++)
		{
			queue.enqueue(s.at(i));
		}
		while(!stack.empty())
		{
			if(stack.size() != queue.size()) return false;

			if(stack.top() != queue.front())
			{
				return false;
			}
			stack.pop();
			queue.dequeue();
		}
		
		return true;
	}
}












