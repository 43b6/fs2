inherit ITEM;
#include <ansi.h>
        
void create()
{
    set_name("�Ǻ�",({"skeleton"}));
    set("long","
һ�����ŵ��۵ĹǺ���������ȥ������Ѿ��൱��Զ�ˣ�����˼����
˵���������С����ʦ��������ʦ̫�ĹǺ�...�㷢���������ƺ���
Щ����...
        \n");
    set("unit","��");
    set("value",100);
    set("no_get",1);
    set("no_sac",1);
    set("no_auc",1);
    set_weight(500000);
    setup();
}

void init()
{
        add_action("sea_ske","search");
}

int sea_ske(string arg)
{
        object me = this_player();
        object ob = this_object();
        object book = new("/data/autoload/tendo/book");
        object letter = new("/open/mon/obj/letter");
        
        if(me->query_temp("icestorm/ice_spell")==6)
        {
        if(!arg) return 0;
        if(arg!="����")
        {
                write("����ϸ�ķ����鿴��"+arg+"�ü��Σ�������û���κεķ���...\n");
                return 1;
        }
                write("����ϸ�ķ����鿴��"+arg+"...\n��Ȼ��"+arg+"�ڵ�����һ�����鼰һ���ż�...\n\n
��˳�ֱ��������...\n");
                book->move(me);
                letter->move(me);
                me->set_temp("icestorm/ice_spell",7);
                return 1;
        }
}

