inherit ROOM;

void create ()
{
  seteuid(getuid());
  set ("short", "Ѫħ��");
  set ("long", @LONG
�˵��洦�ɼ���ض�ǽ�б�....ʵ�ں��������ǵ����䶯һʱ����ħת����
Ѫħ�Ĺ��ֻ���������һ�����ĵķ���֮��...�ڽ�����ɿ���һ̯���ι�״
��Ѫ��(blood).....�ƺ�����һЩ����....
LONG);
  set("item_desc", ([ /* sizeof() == 1 */
  "blood" : " һ̲���ι�״��Ѫ��",
]));
  set("exits", ([ /* sizeof() == 1 */
  "south" : "/open/gsword/room1/blood/room3/r3.c",
]));
  set("search_desc", ([ /* sizeof() == 1 */
  "blood" : "����ϸ������̲Ѫ�գ���Ȼ����Ѫ�վ�Ȼ��һ��������(taoistfigure)Ϊ�����벢�ڷ����д�������..�ƺ��ڽ���˺��(tear)����\n",

]));
  setup();
}
void init()
{
 add_action("do_tear","tear");
}
int do_tear(string str)
{
  object ob,ob1;
  ob=this_player();
  if( str!="taoistfigure")
    return notify_fail("˺������....�����ŷ...!!\n");
  if(ob->query_temp("blood1")!=1)
    return notify_fail("�Դ��ȥ...û����ӡҲ���...!!\n");
  if(ob->query_temp("killtiger")!=1 && ob->query_temp("killdragon")!=1)
    return notify_fail("û��ȫ����Ҳ������Ѫħ...��������...!!!\n");
message_vision("[1;36m��һ��һ�ŵ�˺������Ѫ���Ϸ��ķ���[0m...\n ",ob);
    ob->set("swordplus",1);
  ob->set("bloodsword",1);
  ob->delete_temp("killtiger");
  ob->delete_temp("killdragon");
  ob->delete_temp("blood1");
log_file("sword/broken",sprintf("%s(%s) ���Ѫħ on %s\n",ob->query("name"),ob->query("id"),ctime(time()) ));


  call_out("msg1",3,ob);
  return 1;

}

int msg1(object ob)
{
 message_vision("\n",ob);
 message_vision("[1;31mѪ�ս�������Ѫ��...��һ��һ�����������[0m..\n",ob);
  call_out("msg2",3,ob);
  return 1;
}

int msg2(object ob)
{
  object ob1;

  message_vision("[32mͻȻ...һ���������ױȵ�ħ��������˷�����������...�ŵ�$Nվ��ֱ[0m..\n",ob);

  message_vision("[1;35mѪħ��: С��....ʵ����̫��л����.���������ӡ��[0m.\n",ob);
  message_vision("[1;31m����ë�����ʯ�����������Ұ�..(blood)����ʱ������..[0m\n",ob);
  message_vision("[1;31mֻ��һ��Ѫ�⻮����ǰ....Ѫħ�Ѿ���ʧ������[0m...\n",ob);
   this_player()->move ("/open/gsword/room/g6-5.c");
   this_player()->set("title","[1;33m�ɽ�����--(����ħ��)--[0m");
  message("mud","[1;37mһ������ٵص�Ц������ɽ�����д���[0m..\n\n\n",users());

  message("mud","[1;31mѪħ[1;37m��е�: \n
      �� �� ��......��ӡ����...�������������ҷų�ȥ��~~~���Ǻ�����
      ��ң�ӡ����������Ǹ����Ű�...�һ������Ǳ����    
[1;31m          ��  ��  ��  ��  ��  ��  Ѫ  ϴ  ��  ��  [0m\n ",users());
  call_out("msg3",3,ob);
return 1;

}

int msg3(object ob)
{
  message("mud","[1;35m֣ʿ��̾��:\n

     ��~~~ʦ����ʦ��ķ�ӡ����....��~~�벻���ɽ���Ȼ����ͽ

           �����ɽ�.����ʦ�����ٴ�������[0m....\n",users());

  return 1;
}
