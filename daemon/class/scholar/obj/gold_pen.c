//whip.c

#include <weapon.h>

inherit STABBER;

int special_att();

void create()
{
	object me=this_player();
	set_name("[1;33m���ͽ��[0m", ({"golden pen", "pen", "golden"}) );
        set_weight(300);
	if( clonep() )
	 set_default_object(__FILE__);
	else 
	 {
	  set("unit", "֧");
	  set("long","���ǵ���ʥ�ϴ͸�����������Ľ�ʣ�������Ϊ�������͡�\n");
	  set("value", 10000);
	  set("material", "blacksteel");
	 }
	init_stabber(80);
	me->set("chat_chance_combat",10);
	me->set("chat_msg_combat", ({
	(: this_object(),"special_att" :),
         		}));       
	setup();
}

int special_att()
{
	object me=this_player(),*enemy=me->query_enemy();
	int i=sizeof(enemy),j;
	string *busy_msg=({
	"�����Ľ���[1;33m���ͽ��[1;31m��������ǰһ�㣬��ͻȻ���ö����ٶ�������!!\n",
	"��������[1;33m���ͽ��[1;31mֱ����С�ȣ�ʹ����ͨһ���������ڵء�\n",
	"�����Ľ�[1;33m���ͽ��[1;31m���һ�У��û��������ֱۣ���е������ϰ����С�\n"
	});
        int k=sizeof(busy_msg);
        j=random(i);
        tell_room(environment(me),"[1;33mͻȻ��"+me->query("name")+"�ɿ����"+
        enemy[j]->query("name")+"����һ��...[0m\n",enemy[j]);
	if( enemy[j] && living(enemy[j]) )
	 { 
	  tell_object(enemy[j],"[1;31m"+busy_msg[random(k)]+"[0m");
 	  enemy[j]->start_busy(random(3)+1);
 	 } 
}	
