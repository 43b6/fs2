// made by ccat
#include </open/open.h>
inherit COMBINED_ITEM;
void create()
{
        set_name("޲�ʲ�", ({"green item","item"}) );
	set("long",
"����������޲�ʵ�֮����,��Ҫ�뾭ҩʦ����(check item),\n"+
"����ʳ��(eat pill)��\n");
	set("unit", "��");
	set("base_unit", "��");
	set("value",1000);
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
     if( (arg=="item" || arg=="green item") )
     {
        object user,ob;
        user = this_player();
        cure = user->query_skill("cure",1);
        if( cure > 9)
        {
          message_vision("$N���Ž�޲�ʲ��Ƴ�ҩ��.\n", user);
	  cure /= 10;
          add_amount(-1);
          ob=new(COMMON_OBJ"pill");
          ob->move(user);
          ob->add_amount((int)cure);
        }else
          message_vision("$N��ҽ��̫��,�޷���޲�ʲ��Ƴ�ҩ��.\n", user);
        return 1; 
     }
     return 0;   
}              
              
                           
