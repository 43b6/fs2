//Code by Hitler  1995.10.2
//More added by Fex ..

inherit ROOM;

object ob;
string *name=({"hitler","devils","norman","fary","datas","nsk","moi","boss","lys","stupid","oda"});
int number=11;

void create ()
{
  set ("short", "[1;32m������ʦ������[0m");
  set ("long", @LONG
����������������ʦ��������, ������������, ����ɳ���Ⱥ����Ҿ�,
���г���Ĺ��߼����ŵİ칫��, �ṩ��ʦ�������ʵĻ���! ����������
��ʦר�õĲ�����, ����ʦ���ܽ�������������, ��ͬ���ۡ�
�칫������һ֧��˷�(mac),��...�����..:>>
LONG);

  set("item_desc", ([ /* sizeof() == 1 */
  "mac" : "����һ֧�ɰ�����˷�, �����͸��������Ŀǰ
���ϵ������ʦ��ѶϢ..
�÷�: mac ��Ҫ˵�Ļ� ...
",
]));

  set("exits", ([ /* sizeof() == 2 */
  "up" : "/open/wu/room/school1",
  "down" : "/open/wiz/hall1",
]));

  set("no_fight", 1);

  set("no_magic", 1);

  set("no_clean_up", 0);

  set("valid_startroom", 1);


  setup();
        call_other("/obj/board/fexboard","???");
}

void init()
{
add_action("mac","mac");
}

int mac(string str)
{
int i,flag=0;

if(!str)
  {
   notify_fail("����Ҫ˵Щ����!!, ��Ȼ����wiz ��ô�����õ���?\n");
   flag=0;
   return 0;
  }
for(i=0;i<number;i++)
  {
    if(ob=find_player(name[i]))
    if(ob!=this_player())
    {
    tell_object(ob,"[1;37m[��������][1;33m "+this_player()->query("id")+"[1;37m ˵: [0m"+str+"\n");
    flag++;
    }
  }
  if(flag!=0)
  {
  write("[36m�����ȫ����������ʦ��"+str+"[0m\n");
  }
  else
  {
  write("Ŀǰû������������ʦ������, ����û��������˵�Ļ���\n");
  }
  say(this_player()->query("name")+"("+this_player()->query("id")+")"+" ������˷�ߴߴ������˵��Щ��..\n");
  flag=0;
  return 1;
}
