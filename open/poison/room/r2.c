#include </open/open.h>
#include <ansi.h>
inherit ROOM;
inherit F_MORE;
string look_shelf();
void add_book();
mapping *books;
void create ()
{
  set ("short", "�鷿");
  set ("long", @LONG
    �������鷿���������ܵ����(shelf)�Ϸ����˸�ʽ�������顣
�����ϵ��飬��Щ�Ǽ���ħ�̵���ʷ����Щ��ħ����ѧ���飬��Щ��
�������£���Ұ������顣��������ڤ�ƽ�ͽ�������������鼮����
�������һ����ħ��ͽ�����ö����ƶ��Ĺ����鼮��ǽ��������һ��
����취(note)��
LONG);
 
  set("exits", ([ /* sizeof() == 1 */
  "down" : __DIR__"room12.c",
]));
  set("item_desc", ([ /* sizeof() == 2 */
  "note" : "������ʹ��֮��(use_poison book)���ƶ�֮��(make_poison book)\n"
           "���ڴ��ж�(read)��\n"
           "��ȡ�����鼮�ߣ�����Сͯ����(report ����)��\n",
   "shelf" : (: look_shelf :),
]));
  set("objects", ([ /* sizeof() == 1 */
  "/open/poison/npc/boy_b" : 1,
]));
  set("light_up", 1);
 
  setup();
  add_book();
}
 
void init()
{
        add_action("do_report", "report");
        add_action("do_take", "take");
        add_action("do_read", "read");
        add_action("do_put", "put");
}
int do_read(string book)
{
  object me = this_player();
  if(me->query("class") != "poisoner")
        return notify_fail("�˵ؽ�ֹ��ħ��ͽ�ڴ��ж���\n");
  if(book == "make_poison book") {
        me->start_more(read_file("/open/poison/obj/make_p_book"));
        return 1;
       }
  else if(book == "use_poison book") {
        me->start_more(read_file("/open/poison/obj/use_p_book"));
        return 1;
       }
  return 0;
}
int do_put(string arg)
{
  object book, me = this_player();
  mapping nnew;
   if(!arg) return 0;
  if (sscanf (arg, "%s onto shelf", arg) != 1)
     return 0;
   if( !objectp(book = present(arg,me)) || !mapp( book->query("skill") ))
	{
	 	tell_object(me,"�����ϲ�û�����ֿɶ�֮�顣\n");
		return 1;
	}
  if( sizeof(books) > 20)
     return notify_fail("�����Ѿ��������鼮�ˡ�\n");
  nnew = allocate_mapping(3);
  nnew["name"] = book->query("name");
  nnew["id"] = book->query("id");
  nnew["file_name"] = base_name(book);
  if( !pointerp(books) || !sizeof(books) )
        books = ({ nnew});
  else
        books += ({ nnew });
  message_vision(HIC "$N��"+book->name()+"�ŵ������ϡ�\n" NOR, me );
  destruct(book);
  return 1;
}
string look_shelf()
{
        object who = this_player();
        int i;
        if(!sizeof(books))
                return "��������Ͽտ���Ҳ��û���κ��鼮��\n" ;
        else  {
                   write("�����Ϸ��У�\n\n");
                for(i=0 ; i< sizeof(books) ; i++ )
                   printf("%20s(%s)\n",books[i]["name"],books[i]["id"]);
                   return "";
              }
}
 
int do_report(string book)
{
        object who = this_player();
        string id;
        int i, index, j=0;
 
        if( !present("boy", this_object()))
              return notify_fail("������û���㻹����ɶ����ֱ����(take)����\n");
 
        if( who->query("family/family_name")!="ڤ��ħ��" )
                return notify_fail("С��ͯ˵�����㲻��ħ��ͽ���ˣ��������ҡ�\n");
 
        if(!books)
                return notify_fail("С��ͯ˵������Ҫ������һ���飿\n");
 
        if(sscanf(book, "%s %d", id, index) != 2) {
              id = book;
              index = 1;
             }
 
        for(i=0; i<sizeof(books); i++) {
              if(books[i]["id"] == id) j++;
              if(j == index) break;
             }
 
        if(!j)
              return notify_fail("С��ͯ˵������Ǹ������ϲ�û����Ҫ���顣\n");
        else {
              message_vision("С��ͯ����һ��"+books[i]["name"]+"����$N��\n", who);
              new(books[i]["file_name"])->move(who);
              books = books[0..i-1] + books[i+1..sizeof(books)-1];
             }
        return 1;
}
 
int do_take(string book)
{
        object who = this_player();
        string id;
        int i, index, j=0;
 
        if( present("boy",this_object()) )
                return notify_fail("С��ͯ����ŭ�ȵ�����Ҫ��ʲô��������ǽ�ϵĲ��氡��\n");
 
        if(!book)
              return notify_fail("�㵽��Ҫ��Щʲô����? \n");
 
        if(sscanf(book, "%s %d", id, index) != 2) {
              id = book;
              index = 1;
             }
 
        for(i=0; i<sizeof(books); i++) {
              if(books[i]["id"] == id) j++;
              if(j == index) break;
             }
 
        if(!j)
              return notify_fail("�㿴���һ�㣬�����ֶ�����?\n");
        else {
              message_vision("$N�Ӽ�������"+books[i]["name"]+"��\n", who);
              new(books[i]["file_name"])->move(who);
              books = books[0..i-1] + books[i+1..sizeof(books)-1];
             }
        return 1;
}
void add_book()
{
   mapping nnew;
   int i,j;
  nnew =allocate_mapping(3);
   nnew["id"] = "poison book";
   nnew["name"] = "��������";
   nnew["file_name"] = "/open/poison/obj/pbasebook.c";
 
   if( !pointerp(books) || !sizeof(books) ) {
       books = ({ nnew });
       return ;
      }
 
   for(i=0; i<sizeof(books); i++)
      if(books[i]["name"] == nnew["name"]) {
               j = 1;
               break;
             }
   if(!j) books += ({ nnew });
   return ;
}
 
void reset()
{
 :: reset();
 add_book();
}
