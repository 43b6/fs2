//�羧��ʯ------by dhk 2000.4.22
#include <ansi.h>
inherit ITEM;

void create()
{
    set_name(""HIR"��"HIC"��"HIY"��"HIG"ʯ"NOR"", ({ "hon diamond stone","stone" }) );
    set_weight(100);
 if( clonep() )
    set_default_object(__FILE__);
 else {
       set("long", "���ֿ�ʯ��Ի���羧���ǵ�����һ��������ʦ����ʤ�죬����ǧ�����\n"
                  +"��Ƭ���ϱ����ҵ�����ʯ�������Ƴ������ܰٷְٵĴ���ʹ���ߵ���\n"
                  +"����������Ч�Ĺ����������ھ��ȡ�\n");
       set("unit", "��");
       set("value", 1500000000);
       set("no_give",1);
       set("no_auc",1);
       set("no_sell",1);
       set("no_drop",1);
       
      }
    setup();
}
