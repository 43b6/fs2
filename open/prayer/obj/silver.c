//����()
#include <command.h>
inherit ITEM;

void create()
{
        set_name("����", ({ "silver" }));
        set_weight(30000);
        if( clonep() )
          set_default_object(__FILE__);
        else
        {
          set("unit", "��");
          set("long",@LONG
	����һ�����!!�����ĸ�!!������һ���صĽ���, ���ǰ�
	����ȴ���Ǻܺ�, Ӳ��Ҳ�ǲ�ǿ����, �����ܶȸ�, ����
	��Ч�ط�ֹ�����Ĺ����Լ������˺���!!
LONG);
          set("value", 800);
          set("material", "silver");
          set("no_sell", 1);
          set("no_auc", 1);
        }
}


