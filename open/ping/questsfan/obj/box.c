//��ϼ����------by dhk 2000.4.22
#include <ansi.h>
inherit ITEM;

void create()
{
    set_name(""HIC"��"HIM"ϼ"HIY"����"NOR"", ({ "cloud rosyclon box","box" }) );
    set_weight(1200);
 if( clonep() )
    set_default_object(__FILE__);
 else {
       set("long", "����һֻ�����׹����ɫ�ִ���͸���ı��У�����Ǵ�˵��\n"
                  +"��װ����Ի"HIC"��"WHT"�ڰ��Ľ���"HIC"��"NOR"���񽣡��ഫ�������ڱ�����Խ\n"
                  +"ǧ�ꡣ���ݹ�����ر����ܹ�ֻ�б��򿪹����Σ��ǳ�����\n"
                  +"��\n");
       set("unit", "ֻ");
       set("value", 150000);
       set("no_auc",1);
      }
    setup();
}
