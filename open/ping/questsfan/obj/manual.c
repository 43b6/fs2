//�޵�����------by dhk 2000.4.9
#include <ansi.h>
inherit ITEM;

void create()
{
    set_name(""WHT"�޵�"HIR"��"WHT"��"NOR"", ({ "board chess manual","manual" }) );
    set_weight(50);
 if( clonep() )
    set_default_object(__FILE__);
 else {
       set("long", "����һ�����عŽ���Ϊ������ֵ������ף��ഫ����"HIR"��˧����"NOR"Ż����Ѫ��������\n");
       set("unit", "��");
       set("value", 150000);
       set("no_auc",1);
      }
    setup();
}
