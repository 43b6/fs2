#include <ansi.h>
inherit ITEM;
int do_temp(object);
int dec_kee(object);
int do_set(object);
int do_delete_temp(object);
string ud;
object obj,room;
int utime,inf;

void create() {
        set_name("ѩ��֮��",({"snow ghost eye" , "eye"}));
        set("no_get",1);
        set("no_sac",1);
   setup();
        set("chat_chance",30);
        set("chat_msg",({

            HIC"ѩ�����Ŵ̹ǵĺ��紵�������ϡ�\n"NOR,
      }));
        setup();
 }

void init()
{
	utime=uptime();
	obj = this_player();
	room = environment(this_object());
	ud = geteuid(obj);//����euid����Ϊbadman���Ա任id

	if(!room->query("no_clean_up"))
	room->set("no_clean_up",1);

//  ��mark����ȶ�ʱ�䣬���ֱȶ�ʱ������ĳ�ִ�����ɿ����ظ�����mob
//	if(!room->query_temp("ud"))//û�бȶԵ�ʱ�䣬�趨�ȶ�ʱ��
//	{
//	room->set_temp("ud",utime);
//	}else{
//	  if( utime - room->query_temp("ud") >= 3600)//����һСʱ������
//	  room->set_temp("ud",utime);
//	}

	if(interactive(obj))
	{
	  if(!room->query_temp(ud)) //���û�и�������֣���mob
	  {
	  room->set_temp(ud,utime);//�ڷ���������������ļǺţ�������mob
	  do_set(obj);
	  dec_kee(obj);
	  }else{//�Ѿ����ˣ��ж��Ƿ����һСʱ������һСʱ�����貢����mob
	  if( utime - room->query_temp(ud) > 3600 )
	    {
	    room->set_temp(ud,utime);
	    do_set(obj);
	    dec_kee(obj);
	    }
	  }
	}
}

int dec_kee(object obj)
{
	obj = this_player();
        obj->add("gin",-150);
        obj->add("kee",-250);
        obj->add("sen",-150);
        return 1;
}

int do_set(object obj)
{
        object mob;
	obj=this_player();
        if(obj->query("race") == "Ұ��") return 1;
        if(obj->query("max_force") < 500 &&
           obj->query("combat_exp") < 250000) return 1;
        switch(random(4)+1)
        {
           case 1  : mob=new("/open/mogi/mountain/npc/mob1");
                     mob->move(environment(obj));
                     break;
           case 2  : mob=new("/open/mogi/mountain/npc/mob2");
                     mob->move(environment(obj));
                     break;
           case 3  : mob=new("/open/mogi/mountain/npc/mob3");
                     mob->move(environment(obj));
                     break;
           case 4  : mob=new("/open/mogi/mountain/npc/mob4");
                     mob->move(environment(obj));
                     break;
           default : break;
        }
        switch(random(4)+1)
        {
           case 1  : mob=new("/open/mogi/mountain/npc/mob1");
                     mob->move(environment(obj));
                     break;
           case 2  : mob=new("/open/mogi/mountain/npc/mob2");
                     mob->move(environment(obj));
                     break;
           case 3  : mob=new("/open/mogi/mountain/npc/mob3");
                     mob->move(environment(obj));
                     break;
           case 4  : mob=new("/open/mogi/mountain/npc/mob4");
                     mob->move(environment(obj));
                     break;
           default : break;
        }
        
        return 1;
}
