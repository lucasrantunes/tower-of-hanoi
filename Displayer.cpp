#include <iostream>
#include <string>
#include <vector>
#include "libs/fort.hpp"
#include "Displayer.h"
#include "Stack.h"

namespace hanoi{
    Displayer::Displayer(std::vector<Stack> *stacks_ptr, int difficulty){
        fort::char_table table;
        table.set_border_style(FT_SOLID_ROUND_STYLE);
        table.set_cell_text_align(fort::text_align::center);
        table << fort::header                                             
        << "Stack 1" << "Stack 2" << "Stack 3" << fort::endr;

        for (int s = 0; s < 3; s++)
        {
            if (stacks_ptr->at(s).size() > 0)
            {
                std::vector<Disk> disks = stacks_ptr->at(s).stackStatus();
                for (int r = 0; r < disks.size(); r++)
                {
                    table[difficulty-r][s].set_cell_content_bg_color(disks[r].getColor());
                    table[difficulty-r][s] = diskSpaces(disks[r].getWidth());
                }
            }
            table << fort::endr;
        }
        std::cout << table.to_string() << std::endl;
    }

    std::string Displayer::diskSpaces(int times){
        std::string spaces;
        for (int i = 0; i < times; i++)
        {
            spaces = spaces + "  ";
        }
        return spaces;
    }
}