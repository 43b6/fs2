//�Ƽ׽����Ĺ���()
#include <command.h>
inherit ITEM;

void create()
{
        set_name("[33m�Ƽ׽����Ĺ���[0m", ({ "dragon bone","bone" }));
        set_weight(30000);
        if( clonep() )
          set_default_object(__FILE__);
        else
        {
          set("unit", "��");
          set("long","������а������[33m�Ƽ׽���[0m�Ĺ���, ����[33m�Ƽ׽���[0mȫ�����¾���������ħ����
          �����������ȥ��������, ���߻��·�!? �治֪������ʲô����Ү??..........\n");
          set("value", 800);
          set("material", "bone");
          set("no_sell", 1);
          set("no_auc", 1);
        }
}


