inherit ROOM;
int counter = 10;
void create ()
{
  set ("short", "������");
  set ("long", @LONG

�ӷ����С���߳�������һ��СС�ĺ�Ժ����ǧ�ٸʹ�����ӳ���д�����
������Ҷ�Ž�����������СС�˲�����Ժǽ�º���һ϶����Ȫһ��������
��������ǽ�ڣ�Ȼ�����ǽ�ڣ��ƽ�Ե����ǰԺ�������¶����������
�ŵĻ�������������Ҫ������С˯(sleep)һ����

LONG);

   set("light_up", 1);
   set("exits", ([ /* sizeof() == 1 */
   "south" :__DIR__"g3-1-1.c",
]));

  setup();
}

void init()
{
        add_action("do_sleep","sleep");
}


int do_sleep(string arg)
{
   int _gin;
   message_vision("$N�����½���˯����.Zzzz\n",this_player());
   if( (counter + random(10)) > 10 )
   {
     message_vision("$N���˹���������������ö��ˡ�\n\n",this_player());
     this_player()->add("sen",20);
     counter --;
     return 1;
   } else {
      _gin = this_player()->query("gin");
      message_vision("$N˯��̫���е���.\n\n",this_player());
      if( _gin >5 )
      {
       this_player()->add("gin", -5);
      }else{
       message_vision("$N˯����!!\n",this_player());
       this_player()->set("gin", 1);
       this_player()->set("kee", 1);
      }
      return 1;
   }
}
