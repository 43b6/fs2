// recall.c

#include <ansi.h>

inherit F_CLEAN_UP;

int main(object me, string arg)
{
        int no_transmit,evil;
	object ob,where;
	string filep;
	seteuid(getuid());
	ob=this_player();

//    filep=ob->query("startroom")+".c";
	filep = "/open/common/room/inn.c";

    where = environment(ob);
    no_transmit = where->query("no_transmit",1);
    evil = where->query("evil",1);

	if( CLAN_D->what_clan_area(me) != "NULL" )
		return notify_fail( "�޷��ڰ���������ʹ�á�\n" );

    if(no_transmit)
    {
     write("�ƺ�������������ĺ�����...\n");
     return 1;
    }
    if(evil)
    {
     write("�ƺ�����������޷������ħ��ȳ�....\n");
     return 1;
    }
      if(me->query_temp("��׼��")) return notify_fail("�����ڲ����ƶ�!!\n");
        if( me->is_fighting() ) return notify_fail("������ս���У�\n");

     if(ob->query("kee") < 50)
       return notify_fail("�����������, ������ʹ�� recall..\n");
       ob->add("kee",-50);

	if(file_size(filep)==-1){
	  return notify_fail("��ʽ������ร���֪ͨ������\n");
	          }

	message_vision(HIC"$P����������$P���ͻ���㣡\n"
HIW"ͻȻ�ɿ��н���һ��ҫ�۵Ĺ⣬��ס$P����ʧ������...\n"NOR,ob);

	            ob->move(filep);
message_vision(HIW"ͻȻ�����Ͻ���һ��ҫ�۵Ĺ⣡\n"
	            HIY"$N�ɹ�â�ڻ������߳���....\n"NOR,ob);
	              return 1;
}

int help(object me)
{
	write(@HELP
ָ���ʽ : recall


���ָ���������(��)Ѹ�ٻص���ʼ�㣬����ķ���ľ���ʮ�㡣

HELP
    );
    return 1;
}
