// ��� sa and can get meq ֮ room by swy
#include <room.h>
#include <ansi.h>
inherit ROOM;
void create ()
{
set ("short",HIC"��������ʥ�����ղ���"NOR);
set ("long",@LONG

���ߵ���һ�����Ƕ��������챦�ĵط���ȷû��һ��
�����������ע�⣬ͻȻ�㿴�����ѱ�������һ����
�������⣬������������ǰ�ۿ�(look_for)

LONG);
  set("light_up",1);
  set("exits", ([
"south":"/open/gblade/mrm/room/class/r11.c",
]));
set("no_transmit",1); 
  setup();
}

void init()
{
add_action("get_meq","look_for");
}
int get_meq()
{
object me=this_player(),mid;
object ob;
ob=present("mdragon-eq",me); 
if( !me->query("max_standby"))
		{
		 me->set("max_standby",50);
        }
if(me->query_temp("can-get-meq")==1)
{
if(!ob) {
me->delete_temp("can-get-meq");
me->set("new-by-swy",1);
message_vision(HIW"$N�����ҷ�����$N����Ҫ�ġ�ħ��װ������\n"NOR,me);
mid=new("/data/autoload/blademan/mdragon.c");
mid->set("boss",me->query("id"));
mid->move(me);
log_file("mblade/get-meq", sprintf("(%s)�õ�ħ������ ʱ���� %s\n",
me->query("id"),ctime(time())));
return 1;
} else if(me->query("t_standby")<me->query("max_standby")){
message_vision(HIW"$N�����ҷ�����$N����Ҫ�Ķ�ֻ����\n"NOR,me); 
me->delete_temp("can-get-meq");
me->add("standby",2);
me->add("t_standby",2);
log_file("mblade/get-standby", sprintf("(%s)�õ���ֻ���� ʱ���� %s\n", 
me->query("id"),ctime(time()))); 
return 1; 
}
else message_vision(HIW"��������Ѵ��ʹ�õ����޲����ټӆ���\n"NOR,me);
} else {
message_vision(HIR"$N̰�ĵ�ȥ������ȴ�󴥻��أ���������ȥ����Ѫ��\n"NOR,me);
me->add("eff_kee",-1000);
me->add("kee",-1000);
return 1;
}
}
