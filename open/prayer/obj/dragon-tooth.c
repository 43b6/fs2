//�Ƽ׽��������()
#include <command.h>
inherit ITEM;

void create()
{
        set_name("[33m�Ƽ׽��������[0m", ({ "dragon tooth","tooth" }));
        set_weight(30000);
        if( clonep() )
          set_default_object(__FILE__);
        else
        {
          set("unit", "��");
          set("long","������а������[33m�Ƽ׽���[0m������, ����[33m�Ƽ׽���[0mȫ�����¾���������ħ����
          �����������ȥ��������!? �ǲ���..........\n");
          set("value", 800);
          set("material", "bone");
          set("no_sell", 1);
          set("no_auc", 1);
        }
}


