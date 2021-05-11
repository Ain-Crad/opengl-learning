#pragma once

#include <GL/glew.h>

#include "Test.h"
#include "Renderer.h"

namespace test{
	class TestClearColor :public Test {
	public:
		TestClearColor();
		~TestClearColor();

		void OnUpdate(float delaTime) override;
		void OnRender() override;
		void OnImGuiRender() override;
	private:
		float m_ClearColor[4];
	};
}