# include <Siv3D.hpp>

void Main()
{
	while (System::Update())
	{
		Circle{ 200, 300, 30 }.draw();

		Circle{ 600, 300, 100 }.draw();
		Circle{ Cursor::Pos(), 30 }.draw(); //マウスで追尾
		Circle{ Cursor::Pos(), 100 }.draw(ColorF{ 0.0, 0.6, 0.2, 0.5 });

		Circle{ 100, 300, 30 }.draw(); // 色を指定しない場合は白色

		Circle{ 200, 300, 30 }.draw(Palette::Green);

		Circle{ 300, 300, 30 }.draw(ColorF{ 1.0, 0.8, 0.0 });

		Circle{ 400, 300, 40 }.draw(ColorF{ 0.8 });

		Circle{ 500, 300, 40 }.draw(HSV{ 160.0, 0.5, 1.0 });

		Circle{ 600, 300, 40 }.draw(HSV{ 160.0 });
		Circle{ 500, 300, 80 }.drawFrame(10, 0, HSV{ 70.0, 0.8, 1.0 });
	}
}
