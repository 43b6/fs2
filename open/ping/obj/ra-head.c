#include <ansi.h>
inherit ITEM;
void create()
{
        set_name("�װԵ���ͷ", ({ "ra-head" }) );
        set_weight(5000);
        if( clonep() )
                set_default_object(__FILE__);
        else {
                set("unit", "��");
                set("long","��ͷĿ�װԵ���ͷ.\n");
                set("value", 0);
                set("no_sell",1);
                set("no_put",1);
                set("no_auc",1);
                set("no_sac",1);
  set("no_drop",1);
        }
}

