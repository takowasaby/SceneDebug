#pragma once

class Define final {
public:
	const static int WIN_W = 1280;    //ウィンドウサイズ横
	const static int WIN_H = 960;    //ウィンドウサイズ縦

	template<int Numerator, int Denominator>
	struct width {
		static const int value = WIN_W * Denominator / Numerator;
	};

	template<int Numerator, int Denominator>
	struct height {
		static const int value = WIN_H * Denominator / Numerator;
	};
};

#define WIDTH(x, y) Define::width<x, y>::value
#define HEIGHT(x, y) Define::height<x, y>::value