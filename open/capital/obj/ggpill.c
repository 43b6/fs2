//ggpill by smirk
#include </open/open.h>
#include <ansi.h>

inherit COMBINED_ITEM;

void create()
{
	set_name("������",({"pill"}));
	set("long","����һ���������ɫ��ҩ��,��������Щ���湦Ч��\n");
	set("unit","��");
	set("value",100);
	set("base_weight",150);
	set_amount(1);
	setup();
}

void init()
{
	if( this_player()==environment() )
	add_action("swallow_pill","swallow");
}

int swallow_pill(string arg)
{
	if( arg=="ggpill" || arg=="pill")
	{
        int max1,now1,max2,now2,sen1;
	object ob;
        ob=this_player();	
	 message_vision("$N���˿�ҩ��,�������������ν���鵤�Ƿ�������档\n",ob);
message_vision("xxxx\n",ob); //����ob..system��ǿ�������ص� 0 ֵ
	 tell_object( ob ,"��е�ȫ����,һ���˷ܵĸо��������������ƶˡ�\n");
	 tell_object( ob ,HIB"��е�����������.......\n"NOR);
	 tell_object( ob ,HIG"��е�������ǿ��.......^_^\n"NOR);
         max1=ob->query("max_gin");
	 max2=ob->query("max_kee");
	 sen1 = ob->query("sen");
	  	if( sen1 > 20 )
	  	 { ob->set("sen",20);
		   ob->add("gin",random(30));
		   ob->add("kee",random(5));
		  }
	 	else
	  	 { ob->set("sen",sen1);
		   ob->add("gin",random(15));
		   ob->add("kee",random(5));
		  }
         now1 = ob->query("gin");
		if( now1 > max1 )
		 { ob->set("gin",max1);
			now1 = max1;
		 }
	 now2 = ob->query("kee");
		if( now2 > max2 )
		 { ob->set("kee",max2);
			now2 = max2;
		 }
	 add_amount(-1);
	 return 1;
	}
	return 0;
}	
