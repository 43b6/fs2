// change by adam
#include <ansi.h>
inherit COMBINED_ITEM;
void create()
{
        set_name(HIC"ǧ����ɽ��֥"NOR, ({"super item","item"}) );
	set("long",
"������������ؾ���ǧ������֮��ҩ,ר��Ѫ��ʧ��.\n"+
"��Ҫ�뾭ҩʦ����(check item),����ʳ��(eat pill)��\n");
	set("unit", "��");
	set("base_unit", "��");
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
     if( (arg=="item" || arg=="super item") )
     {
        object user,ob;
        user = this_player();
        cure = user->query_skill("cure",1);
        if( user->query_skill_mapped("cure")=="godcure" )
        {
         cure = user->query_skill("cure");
        }else{
        cure = user->query_skill("cure")/2;
        }
                                                      
        if( cure > 20)
        {
          message_vision("$N���Ž���֥�Ƴ��ɵ�.\n", user);
      // add_amount(-1);    ���Ӧ�ü��ں��档
          cure = cure/2;
          ob=new("/open/gsword/obj/f_pill");
          ob->move(this_player());
          ob->add_amount((int)cure);
          add_amount(-1);
        }else
          message_vision("$N��ҽ��̫��,�޷�����֥�Ƴ��ɵ�.\n", user);
        return 1; 
     }
     return 0;   
}              
              
                           
