
// Room: /open/gsword/room/g6-11
inherit ROOM;
void create ()
{
  seteuid(getuid());	// ����˵Ҫ����һ����?
  set ("short", "ɽ��");
  set ("long", @LONG
�����Ѩ�Ĵ�����������������һ����С��ʯѨ������������һ��
˵�����Ĺ������գ�ʱ����������ҽе�������ʱ���ŵ�Ũ���Ѫ��ζ��
���㲻��������
LONG);
  set("exits", ([ /* sizeof() == 1 */
  "south" : __DIR__"g6-10",
]));
  set("objects", ([ /* sizeof() == 1 */
  "/open/gsword/obj/gstatue1.c" : 1,
]));
  
  setup();
}

void init()
{
 add_action("cut_hand","cut");
 add_action("do_enter","blood");
}
 
int cut_hand(string str)
{
  object ob,ob1;
  ob=this_player();
  if(!present("statue",environment(ob)))
    return notify_fail("�����ô��θ��� ,ʧѪ���಻��Ŷ.\n");
  if( str!="hand")
    return notify_fail("��������� ,���ڸ��İ�!!\n");
  message_vision("[1;31mһ����Ѫ��$N������� ,���������ȥ.....      \n [0m",ob);
  write("\n\n\n");
     ob1=present("statue",this_object());
  destruct(ob1);
  call_out("msg1",3,ob);
  return 1;
}   

int do_enter(string str)
{
   object me = this_player();
  if(me->query("bloodsword")==1)
   me->move("/open/gsword/room1/blood/room3/r5.c");
   return 1;
}
int msg1(object ob)
{
 message_vision("\n",ob);
 message_vision("ֻ��������ָ΢�� ,��ɫ��ת����\n",ob);
  call_out("msg2",3,ob);
  return 1;
}

int msg2(object ob)
{
  object ob1;

  message_vision("ͻȻ�����۾�һ�� ,һ�����񾹶������� ,�ŵ�$N��������..\n",ob);  
  message_vision("�����: С��лл����.....\n",ob);
  message_vision("����һ�������嵽���� ,����һԾ ,��Ӱ��ʧ��ɽ����\n",ob);
  ob1=new("/open/gsword/mob/bigghost");
  ob1->move("/open/gsword/room/test");
  message("mud","[1;34mһ��ɽ�ѵص�Ц������ɽ�д���..\n\n\n[0m",users());
  message("mud","[1;32m��ë������: \n
      �� �� ��......����[33;1m"+ ob->query("name")+"[0m\n
   [1;32mʹ�����������ڵ������ֽ��� \n
          �ɽ��ɵĹ������� ,Ĩ�ɾ����ǵĲ��� ,������������ٰ� ,\n
              ��Ҫ  Ѫ  ϴ  ��  ��  !!!!\n [0m",users());
  call_out("msg3",3,ob);
  return 1;
}

int msg3(object ob)
{
 new("/open/gsword/mob/gghost")->move("/open/gsword/room/road8");
 new("/open/gsword/mob/gghost")->move("/open/gsword/room/road6");
 new("/open/gsword/mob/gghost")->move("/open/gsword/room/road1");
 new("/open/gsword/mob/gghost")->move("/open/gsword/room/road4");
 new("/open/gsword/mob/bloody")->move("/open/gsword/room/road6");
 new("/open/gsword/mob/bloody")->move("/open/gsword/room/road4");
 new("/open/gsword/mob/gghost")->move("/open/gsword/room/road4"); 
 new("/open/gsword/mob/gghost")->move("/open/gsword/room/road1");
 new("/open/gsword/mob/ghost1")->move("/open/gsword/room/road1");
 new("/open/gsword/mob/ghost1")->move("/open/gsword/room/rroad1");
 new("/open/gsword/mob/ghost1")->move("/open/gsword/room/lroad1");
 message("mud","[1;34m�����Ѿ������� ,\n
     С���� ,����ɱ���ɽ�������ϴ��..\n[0m",users()); 
  call_out("msg4",3,ob);
  return 1;
 }
int msg4(object ob)
{
  message("mud","[1;33m֣ʿ��̾��:\n

     ��...����һ��ԩ��...
           ���ӵ��� ,���������Ļ����ⳡ����ǰ�����µ����..\n[0m",users());
  
  return 1;
}                      
