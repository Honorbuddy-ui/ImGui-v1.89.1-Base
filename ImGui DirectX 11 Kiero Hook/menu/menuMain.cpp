#include <Windows.h>
#include "menu.h"
#include "../imgui/imgui.h"
#include "Classes.h"
#include "../kiero/minhook/include/MinHook.h"
//bool
namespace b {
    bool bMenu = true;
    bool bCheckBox = false;
}
//int
namespace i {
    int iInt = 100;
    int screen_x = GetSystemMetrics(SM_CXSCREEN);
    int screen_y = GetSystemMetrics(SM_CYSCREEN);
}
//float
namespace f {
    float fFloat = 150.f;
}
//keybinds
namespace Key {
    int Key = VK_INSERT;
    int UnloadKey = VK_END;
}
void Unload(int key) {
    if (GetAsyncKeyState(key)) {
        kiero::shutdown();
        MH_DisableHook(0);
    }
}
void RenderMenu(int key) {
#pragma region Styling
    ImGuiStyle* style = &ImGui::GetStyle();

    //example Change Background Color
    //___________________________________________________________________________________________________________
    // 
    // 
    //style->Colors[ImGuiCol_WindowBg] = ImVec4(0.06f, 0.05f, 0.07f, 1.00f);//ImVec4(0.06f, 0.05f, 0.07f, 1.00f)
    //
    //
    //___________________________________________________________________________________________________________
#pragma endregion

   
    if (GetAsyncKeyState(key) & 1) b::bMenu = !b::bMenu;//Open Menu Bind
    
    Vector2 vec{i::iInt, i::iInt};
    Vector2 vec2{f::fFloat, f::fFloat};
    ImDrawList* FG = ImGui::GetForegroundDrawList();//In front of the Menu
    ImDrawList* BG = ImGui::GetBackgroundDrawList();//Behind of the Menu

    if (b::bMenu){
        ImGui::Begin("ImGui Window");
        ImGui::Checkbox("Checkbox", &b::bCheckBox);
        ImGui::SliderInt("Slider Int", &i::iInt, 1, 300);
        ImGui::SliderFloat("Slider Float", &f::fFloat, 1.f, 300.f);
        ImGui::PushFont(F.YourFontF);
        ImGui::Text("Custom Font Example");
        ImGui::PopFont();//Dont forget it pls 
        ImGui::End();
    }
    if (b::bCheckBox) {
        //example use Drawlist
      BG->AddRectFilled(vec, vec2, ImColor(255, 255, 255, 255));
      FG->AddRectFilled(vec+10,vec2+10, ImColor(0, 0, 0, 255));
    }
}