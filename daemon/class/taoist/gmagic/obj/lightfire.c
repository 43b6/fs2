
inherit ITEM;
#include <ansi.h>

void create()
{
        set_name("�ǹ�֮��", ({ "lightfire", }) );
        set_weight(1);
          set("unit", "ö");
          set("long", "�ɷ����γɵ�СС���򣬿�������������\n");
          // light_up ���� 0 ��ʾ����ȼ�յ�������
          set("light_up", 300);
          set("burned","��Ϩ���");
          set("had_light",1);
	  set("no_auc",1);
        setup();
}
