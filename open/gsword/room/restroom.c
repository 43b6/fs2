// Room: /open/gsword/room/restroom.c

inherit ROOM;
// int picture = 1;

void create ()
{
  set ("short", "��ջ");
  set ("long", @LONG
һ�����صĿ�ջ,�����������ǿ�������, �����ڿ��˲��Ǻܶ�,
�ϰ����Ҳ�ǰ������,���滳��������ô��Ӫ��ȥ���������.
LONG);

  set("exits", ([ /* sizeof() == 1 */
  "west" : __DIR__"su9",
]));
  set("objects", ([ /* sizeof() == 1 */
  "/open/gsword/mob/bandit" : 1,
]));
  set("light_up", 1);

  setup();
}

void init()
{
  add_action("do_search","search");
}

int do_search(string arg)
{   
   object me;
   me = this_player();
     if( present ("keeper", environment(me)) )
     if(!me->query_temp("have_note"))
   {
     write("�ϰ�˵: �˿Ͱ�...���гǿ����������ĵط�Ү...
...����...��(������)��...\n");
     return 1;
   }  
/*  if( picture )
  {
     write("���ҵ�һ����...\n");
     new("/open/gblade/obj/picture")->move(me);
     picture = 0;
     return 1;
  } 
*/
  if(arg == "�ذ�" && me->query_temp("have_note"))
  {
    write("���ڵذ��Ϸ���һЩѪ��,����Խ��ϰ忴��(show keeper blood).\n");
    me->set_temp("see_blood",1);
    return 1;
  }   
  write("�������ϰ��죬���ǿ��������κ�����֮����\n");
  return 1;
}           
