#pragma once
//Fonts
class Fonts {
public:
    ImFont* BasicFont;
    ImFont* YourFontF;
    /*
    How to Define fonts:
    To load Default Font put this string in ImGuiInit() (main.cpp)
    Font::BasicFont = io.Fonts->AddFontDefault();


    To load Custom font From memory, create Font.h, include it to main.cpp
    in Font.h
     #pragma once
     unsigned char YourFont[]{
      //Here Yours ByteCode
      //
     };
     How to get ByteCode?
     visit https://tomeko.net/online_tools/file_to_hex.php?lang=en
     drop font file "YourFont.ttf" in field "Drop File here"
     Copy output (ByteCode) to clipboard
     Paste it into Font.h
     at least just define it in ImGuiInit() (main.cpp)

     F.YourFontF = io.Fonts->AddFontFromMemoryTTF(&YourFont(this is name of your font in Font.h), sizeof YourFont, 13(size of your font, 10 is default),NULL,(this is optional, if you whant to add any language symbols) io.Fonts->GetGlyphRangesCyrillic());
     then you can Push Font, to get your custom font
     ImGui::PushFont(F.YourFontF);
     ImGui::Text("Example");
     ImGui::PopFont(); // Dont forget to PopFont, you get crashed if you forget
     you can see examples in ImGuiInit()
     and how to use in Menu
    */
}; extern Fonts F;
