//written by acelan...../u/a/acelan/ghost/room/ghost11.c
inherit ROOM;
void create()
{
object me=this_player();
        set("short", me->query("name")+"��ĹѨ");
        set("long", @LONG
��������ɭɭ��, ����յ�����, û���κζ���, ֻ��ǰ������
һ�ڹ�ľ(coffin), ��������ͦ�µ�, ��֪������˯����ʲô��, ��
Ȼ�������ҵĴ�λ��
LONG);
   set("exits", ([ /* sizeof() == 1 */
       "east"  : __DIR__"ghost12.c",
   ]));
   set("item_desc", ([ /* sizeof() == 1 */
       "coffin" : "����һ�ڹ�ľ\n",
   ]));
   setup();
}

void init()
{
object me=this_player();
        set("short", me->query("name")+"��ĹѨ");
        set("long", @LONG
��������ɭɭ��, ����յ�����, û���κζ���, ֻ��ǰ������
һ�ڹ�ľ(coffin), ��������ͦ�µ�, ��֪������˯����ʲô��, ��
Ȼ�������ҵĴ�λ��
LONG);
   add_action("do_open", "open");
   add_action("do_search", "search");
}

int do_search( string arg)
{
object me=this_player();
   if( arg != "coffin")
   {
      message_vision("��������ȥ, ʲôҲû����...\n", me);
      return 0;
   }
   if( me->query_temp("ghost", 1) < 3)
   {
      message_vision("����ϸ�ؽ���Ĺ�ľ���ܶ�����һ��, ����ȴû��ʲô���֡�\n", me);
      return 0;
   }
   message_vision("�㽫��Ĺ�ľ��ϸ������һ��, ��������δ���, Ӧ���ǿ��Դ�(open)�ġ�\n", me);
   me->set_temp("ghost", 4);
   return 1;
}

int do_open( string arg)
{
object me=this_player();
   object ob;
   if( arg != "coffin")
   {
      message_vision("��Ҫ��ʲô.........\n", me);
      return 0;
   }
   if( me->query_temp("ghost", 1) < 4)
   {
      message_vision("����һ��, ʹ������̵�����, ���ǹ�ľ�����ŷ粻����\n", me);
      return 0;
   }
   message_vision("��ʹ���Ľ���Ĺ�ľ�򿪺�, ��Ȼ������������˸�ʽ�����ı��\n", me);
   message_vision("���������Լ�������Ʒ��Ҳ������˼���ã�ֻȡ������һ����ҩ��\n", me);
   if (me->query("quest/worldpill") < 1)
   {//������������Ұ�æ��pill
	   ob = new( "/open/killer/mon/ghost/obj/worldpill" );
	   ob->move(me);
	   me->set_temp("getpill",1);  //���������ã������ʸ�ԣ�����趨��worldpill��
   }
   me->delete_temp("ghost"); //����������ȡ
   return 1;
}


