// change by adam
#include <ansi.h>
inherit COMBINED_ITEM;
void create()
{
        set_name(HIC"ǧ����ɽѩ��"NOR, ({"force item","item"}) );
        set("long",
"������������ǧ����ؾ�����������ҩ֮��ҩ,����˳��ָ�����.\n"+
"��Ҫ�뾭ҩʦ����(check item),����ʳ��(swallow pill).\n");
        set("unit", "��");
        set("base_unit", "��");
        set("no_sell",1);
        set("value",2500);
        set("base_weight", 50);
        set_amount(1);
        setup();
}

void init()
{
        if( this_player()==environment() )
        {
                add_action("check_item","check");
        }
}

int check_item(string arg)
{
     int cure;
     if( (arg=="item" || arg=="force item") && (query("unit") == "��") )
     {
        object user,ob;
        user = this_player();
        if( user->query_skill_mapped("cure")=="godcure" )
        {
           cure = user->query_skill("cure");
        }else{
           cure = user->query_skill("cure")/2;
        }
        if( cure > 14)
        {
          message_vision("$N���Ž���ɽѩ���Ƴ��鵤.\n", user);
         cure = cure/2;
          ob=new("/open/gsword/obj/ff_pill");
          ob->move(this_player());
          ob->add_amount((int)cure);
          add_amount(-1);
        }else
          message_vision("$N��ҽ��̫��,�޷���ѩ���Ƴ��鵤.\n", user);
        return 1;
     }
     return 0;
}
