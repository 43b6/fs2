#include <ansi.h>
inherit ITEM;

void create()
{
    set_name(HIR"��������"NOR, ({"delfire-mark","mark"}));
    set("long","һ�ſ��Զž����������!\n");
    set_weight(80);
    set("no_auc",1);
    set("no_give",1);
    set("no_put",1);
    set("no_sell",1);
    set("no_sac",1);
    set("no_drop",1);
    set("unit","��");
    setup();
}  

