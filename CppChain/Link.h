#pragma once

namespace Chains {

	class Link
	{
	public:
		Link();
		~Link();

		enum LinkResult
		{
			Unknown, Pass, Fail, Inconclusive, Abort
		};

		virtual void Task() = 0;
	};
}
