// juju4.c by konn
#include <ansi.h>
inherit ITEM;

void create()
{
        set_name(HIW"��������֮���ߡ��־�"NOR,({"juju 4","juju"}));
        set_weight(50);
        if(clonep())
                set_default_object(__FILE__);
        else {
           set("long",
"����һ�ż�ϡ�еķ�ֽ, ���ϻ���һЩ��ֵķ��ż�����, ����д��һ��\n"+
"���ĺ��� -- ���ߡ�, �ഫ���Ǳ�а�ɸ����õķ�ֽ, ֻ��éɽ��ʿ��\n"+
"�������ֶ���, ��֪Ϊ�������˳�����\n");

           set("unit", "��");
           set("light_up", -1);
           set("no_drop", 1);
           set("no_sell", 1);
           set("no_give", 1);
        }
        setup();
}

int query_autoload() { return 1; }
