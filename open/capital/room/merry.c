// Room: /open/capital/room/merry
#include "/open/common/common.h"
#include <ansi.h>
#include <room.h>
#include <command.h>

inherit ROOM;

int in_merry;
object husband, wife;
string event;

object	po, horse, bedan, music, firework, misc,
	relative, friend, people;

void create ()
{
  set ("short", "����˾");
  set ("long", @LONG
���ǻ����ص�Ϊ���տ��ٵ�һ��λ��ר�Ÿ����������������
���飬��������Ǽ�(log),��Ȼ���ǵð���һ��Ҳ������������׼��
�ƽ�ʮ����һ�н���������ר�˰��ף����Ҹ����·�һ�䡣����, ��
�������伲��, ����Թż����, �����صؿ����������, ��Ҫ����
(divorce) ��Ͽ�, ����û������. �뵽��, ��������....
	         �ԹŶ�Թż, �ӽ��ٷ���.
����, ���ϻ�˵, Ҫǿ�����Ҳ����, ��һǧ���ƽ�����.
LONG);

  set("exits", ([ /* sizeof() == 1 */
  "west" : __DIR__"r72",
]));
  set("item_desc", ([ /* sizeof() == 1 */
  "board" : "
           ��ԡ����

           ��������

",
]));
  set("no_fight", 1);
  set("light_up", 1);
  set("no_magic", 1);

  setup();
}

void init()
{
  add_action ("divorce", "divorce");
  add_action ("log", "log");
  add_action ("logout", "logout");
  add_action ("answer", "answer");
}

int divorce (string arg)
{
  string couple;
  object me, obj;

  me = this_player();
  if (couple = me->query("couples/id")) {
    if (!obj = present (couple, this_object())) {
      if (me->can_afford (10000000)) {
	obj = FINGER_D->acquire_login_ob (couple);
	if (obj) {
	  obj->delete ("couples");
	  obj->save();
	  destruct (obj);
	  me->pay_money (10000000);
	  me->delete ("couples");
	  write ("��Ȼ�����ҿ�, ��������������.!\n");
	}
	else {
	  me->delete ("couples");
	  write ("��? ����һ�벻����, �ð�, ��������Ը.\n");
	}
      }
      else {
        write ("Ҫ���Ļ�, Ҫ����һ�����.\n");
      }
    }
    else if (!obj->query_temp ("divorce")) {
      me->set_temp ("divorce", 1);
      write ("������һ��Ҳ��ע�����, ���������������.\n");
    }
    else if (obj->query ("couples/id") == me->query ("id")) {
      obj->set_temp ("divorce", 0);
      me->delete ("couples");
      obj->delete ("couples");
      message_vision("����˾��˵: ��ϲ, �������˴ӽ��Ժ��������.\n", this_player());
    }
    me->save();
  }
  else {
    write ("û���������?\n");
  }
  return 1;
}

void logout()
{
  in_merry = 0;
  event = "";
  remove_call_out("wife");
  remove_call_out("husband");
  remove_call_out("confirm_wife");
  remove_call_out("confirm_husband");
  tell_room(this_object(), "����˾��˵��: ���ν���������ȡ����\n");
}

int log()
{
  object	me;
  string	name;
  int		age;

  me=this_player();
  if (me->query("couples")) {
    if (!present("wedding ring", me)) {
	write ("����˾��˵: �ҿ���....\n����˾��˵: ��ֻ�ǽ�ָ����, �����ϲ�����.\n");
	if (new(RING)->move(me))
	  write ("����˾��˵: ��ָ����, �ɱ��ٸ㶪���.\n");
	else
	  write ("����˾��˵: �Բ���, Ŀǰ��ָȱ��, �Ҵ��񿴿���û��.\n");
    }
    else
      write ("����˾��˵: ��? �����ٻ�? �Ŷ�Ҳû��.\n");
    return 1;
  }
  
  if (in_merry)
    return notify_fail ("����˾��˵: �����Ѿ����˵Ǽ�Ҫ��飬��ȵ�������\n");

  name = me->name();
  age = me->query("age");
  if ( age < 16) {
    event = "";
    message_vision("����˾��˵: "+me->name()+"����̫��������ร�����������ɡ�\n",
	me);
    return 1;
  }
  if ( !me->pay_money(100000) ) {
    event = "";
    message_vision("����˾��˵: "+me->name()+"����������Ҫ��Щ�����ɣ���ȥ׬Ǯ������\n",
	me);
    return 1;
  }
  message_vision("����˾��˵��: "+name+"��������Ǯ�ķ��ϣ��Ͱ����������ɡ�\n"+
		 "����˾��˵��: "+name+"����ʼ�ش���һЩ���⣬"+
		 "ÿ���������һ���ӿ��ǡ�\n����˾�����˷����ӣ�����һ��...\n",me);
  
  in_merry = 1;
  if (me->query("gender") == "����") {
	wife = 0;
	husband = me;
	me->set_temp("in_merry",1);
	call_out("wife", 3);
  }
  else {
	me->set_temp("in_merry",1);
	husband = 0;
	wife = me;
	call_out("husband", 3);
  }
  return 1;
}

void wife ()
{
  message_vision("����˾��˵��: "+husband->name()+"����ش������������˭!\n",
	husband);
  event = "ask_wife";
  call_out("logout", 60);
}

void confirm_husband()
{
  message_vision(
    "����˾��˵��: "+husband->name()+"����Ը��һ������"+wife->name()+"?\n"+
    "���Ұ����չ�����������������(y/n) ?\n", husband);
  event = "confirm_husband";
  call_out("logout", 60);
}

void confirm_wife()
{
  message_vision(
    "����˾��˵��: "+wife->name()+"����Ը��һ������"+husband->name()+"?\n"+
    "���Ұ����չ�����������������(y/n) ?\n", wife);
  event = "confirm_wife";
  call_out("logout", 60);
}
  
int answer(string arg)
{
  object	me=this_player();

  if (me != husband && me != wife) return
    notify_fail ("����˾��˵��: ���ֲ�����������㻨�䰡��\n");

  if (!arg) return 0;

  if (!in_merry) return notify_fail ("����˾��˵��: ������ȵǼǰɡ�\n");
  switch (event) {
	case "ask_husband":
	  event = 0;
	  if (me != wife) return
		notify_fail ("����˾��˵��: �𼱣���û�ֵ�����\n");
	  remove_call_out("logout");
	  if (!husband = present(arg, environment(me))) {
		message_vision("����˾��˵��: "+me->name()+
		  "��Ķ����ڰ������������ɣ��Ȋ�һ����ม�\n", wife);
		call_out("wife", 60);
	  }
	  else {
	    if ( husband->query("gender")=="Ů��") {
	      message_vision("����˾��˵��: �Բ������Ҹ��в���ĵ��Ϲ���\n",
		wife);
	    }
	    else {
	      call_out("confirm_wife",3);
	      message_vision("$N�ش�˵: ��Ҫ��$nΪ��!\n", me, husband);
	    }
	  }
	  break;
	case "ask_wife":
	  if (me != husband) return
		notify_fail ("����˾��˵��: �𼱣���û�ֵ��㡣\n");
	  event = 0;
	  remove_call_out("logout");
	  if (!wife = present(arg, environment(me))) {
		message_vision("����˾��˵��: "+me->name()+
		    "��Ķ����ڰ������������ɣ�����һ����ม�\n", me);
		call_out("wife", 60);
	  }
	  else {
	    if ( wife->query("gender")=="����") {
 	      message_vision("����˾��˵��: �Բ������Ҹ�����С���ĵ����š�\n",me);
	    }
	    else {
	      call_out("confirm_wife",3);
	      message_vision("$N�ش�˵: ��ҪȢ$nΪ��!\n", me, wife);
	    }
	  }
	  break;
	case "confirm_husband":
	  if (me != husband) return
		notify_fail ("����˾��˵��: �𼱣���û�ֵ��㡣\n");
	  event = 0;
	  remove_call_out("logout");
	  if (arg == "y" || arg == "yes" || arg == "Y" || arg == "Yes") {
	    message_vision("$N�ش�˵: �ǵġ�\n", me);
	    message_vision("����˾��˵��: hmm...�������͵����ͺ���ɡ�\n",me);
//�Ұ� void stop_merry()�����Ƕ�����Ҳ����ȥ,���������...�ͽ���

	    husband->set("couples/id", wife->query("id"));
	    husband->set("couples/name", wife->name());
	    wife->set("couples/id", husband->query("id"));
	    wife->set("couples/name", husband->name());
	    husband->save();
	    wife->save();
	    
	    call_out("start_merry",3);
	  }
	  else {
	    message_vision("$N�ش�˵: �! Kill me!!!\n", me);
	    message_vision("����˾��˵��: ��Ȼ�з�����Ӧ�������������ϡ�\n", me);
	    call_out("logout",1);
	  }
	  break;
	case "confirm_wife":
	  if (me != wife) return
		notify_fail ("����˾��˵��: �𼱣���û�ֵ��㡣\n");
	  event = 0;
	  remove_call_out("logout");
	  if (arg == "y" || arg == "yes" || arg == "Y" || arg == "Yes") {
	    message_vision("$N�ش�˵: �ǵġ�\n", me);
	    call_out("confirm_husband",3);
	  }
	  else {
	    message_vision("$N�ش�˵: �! Kill me!!!\n", me);
	    message_vision("����˾��˵��: ��ȻŮ������Ӧ�������������ϡ�\n", me);
	    call_out("logout",1);
	  }
	  break;
	default:
	  return 0;
  }
  return 1;
}

int wear_all()
{
  object	ob;

(ob=new("/data/autoload/ring.c"))->move(husband); ob->wear();
  (ob=new(MBOOTS))->move(husband); ob->wear();
  (ob=new(GLOVES))->move(husband); ob->wear();
  (ob=new(CLOTH))->move(husband); ob->wear();
  (ob=new(PANTS"))->move(husband); ob->wear();
  (ob=new(SCARF))->move(husband); ob->wear();
  new(FLOWER)->move(wife);
(ob=new("/data/autoload/ring.c"))->move(wife); ob->wear();
  (ob=new(GLOVES))->move(wife); ob->wear();
  (ob=new(LACE))->move(wife); ob->wear();
  (ob=new(GBOOTS))->move(wife); ob->wear();
  (ob=new(SKIRT))->move(wife); ob->wear();
  (ob=new(SUIT))->move(wife); ob->wear();
  (ob=new(CAPE))->move(wife); ob->wear();
  return 1;
}

void start_merry()
{
  object	wade;
  string	husband_name, wife_name;

  husband_name=husband->query("name");
  wife_name=wife->query("name");

  call_out("wear_all",1);

  remove_call_out("start_merry");
  CHANNEL_D->do_channel(this_object(), "mud",
	HIY"����"+husband_name+"������"+wife_name+"�Ľ����ʽ��ʼ........\n"+
	"��·���������������˾�����֤..........\n"NOR);

  call_out("step1", 60);
}

void step1()
{
  CHANNEL_D->do_channel(this_object(), "mud",
	HIY"�ƾ���һ��....�ֶӡ��ڶӡ���ˣ�ŵȶ����λ....\n"
	"�������Ͽ����������ϻ��Ρ�\n"NOR);
  tell_room (this_object(), "�㿴���������˿����������˻��Ρ�\n", 
	husband, wife);
  tell_object(husband, "��߸����˵����˿���\n");
  tell_object(wife, "���߸����˵����˻��Ρ�\n");

  po		= new(PO);		po->move(MSTART_ROOM);
  horse		= new(HORSE);		horse->move(MSTART_ROOM);
					horse->start_merry(husband);
  bedan		= new(BEDAN);		bedan->move(MSTART_ROOM);
					bedan->start_merry(wife);
  music		= new(MUSIC);		music->move(MSTART_ROOM);
					music->start_merry();
  firework	= new(FIREWORK);	firework->move(MSTART_ROOM);
					firework->start_merry();
  misc		= new(MISC);		misc->move(MSTART_ROOM);
					misc->start_merry();
  relative	= new(RELATIVE);	relative->move(MSTART_ROOM);
					relative->start_merry(husband, wife);
  friend	= new(FRIEND);		friend->move(MSTART_ROOM);
					friend->start_merry(husband, wife);
  people	= new(PEOPLE);		people->move(MSTART_ROOM);
					husband->move(horse);
  					wife->move(bedan);

  call_out ("forward", 5+random(10), "north", 8);
}


void forward(string go_way, int times)
{
  object	env=environment(horse);
  int		dir;

  if (times == 0)
    if (go_way == "north") {
	times = 8;
	go_way = "south";
    }
    else {
	CHANNEL_D->do_channel(this_object(), "mud",
	  HIY"���....�����������붴����������������ɢ��\n"NOR);
	call_out ("stop_merry", 1);
    }

  tell_room (env, "���Ӷ�����ǰ��...\n", husband, wife);
  tell_object(husband, "������΢����һ�£����Ŷ�����ǰ��....\n");
  tell_object(wife, "������΢����һ�£����Ŷ�����ǰ��....\n");

	GO_CMD->main(po, 	go_way);
	GO_CMD->main(horse,	go_way);
	GO_CMD->main(bedan,	go_way);
	GO_CMD->main(music,	go_way);
	GO_CMD->main(firework,	go_way);
	GO_CMD->main(misc,	go_way);
	GO_CMD->main(relative,	go_way);
	GO_CMD->main(friend,	go_way);
	GO_CMD->main(people,	go_way);
	GO_CMD->main(husband,	go_way);
	GO_CMD->main(wife,	go_way);
	call_out("forward",5+random(5), go_way, times-1);
}

void stop_merry()
{
	husband->move("/player/inn");
	wife->move("/player/inn");
	destruct(po);
	destruct(horse);
	destruct(bedan);
	destruct(music);
	destruct(firework);
	destruct(misc);
	destruct(relative);
	destruct(friend);
	destruct(people);
	husband->set("couples/id", wife->query("id"));
	husband->set("couples/name", wife->name());
	wife->set("couples/id", husband->query("id"));
	wife->set("couples/name", husband->name());
	husband->save();
	wife->save();
	// ���ϲ��
	// .....
}
