// c_pen.c by powell

#include </open/open.h>

inherit COMBINED_ITEM;

void create()
{
	set_name("̿��",({"pen"}));
	set("long","һ֧����֦���ƶ��ɵ�̼��, ����������Ϳѻ (write)��\n");
 	set("unit","֧");
	set("base_unit","֧");
	set("value", 10000);
 	set("base_weight", 45);
	set_amount(1);
	setup();
}
void init()
{
	add_action("do_write","write");
}
int do_write(string arg)
{
	object ob=environment(this_player());
	if (arg == 0 ){
	tell_object(this_player(),"̿�ʵ��÷��� -- write xxxxxx \n");
	return 1;
	}
	if (ob->query("can_write") != 1){
	tell_object(this_player(),"ι!!  ����Ϊ�������Ķ���??\n"+
	                          "��㵽����Ϳѻ�ᱻΧŹ�..\n");
	return 1;
	}
        if (ob->query("word")){
        message_vision("$N����һЩ��ˮ��������, ��ǽ��ԭ�е��ּ�Ĩȥ...\n\n",this_player() );
        
//  ������Ҫ�������õ�, ��������ûд��  :P        
/*      if (this_player()->query_temp("") <   ){
       	tell_object(this_player(),"��ͻȻ����ǽ����һ��С��(words)..\n");
        this_player()->set_temp("", );
        }
*/         
        } 
        message_vision("$N��ǽ��д�� :\n"+arg+"\n\n",this_player());
	ob ->set("word",arg);
	ob ->set("writer",this_player()->query("name"));
	tell_object(this_player(),"��..��ʵ�Ʒ�ʿ�����@#$%\n"+
				  "��û���¾Ͳ�������, �����ֱ�ѱʶ���..\n");
	add_amount(-1);
	return 1;
}
