// opem/killer/island/npc/louton.c
inherit NPC;     //³��
#include <ansi.h>
#include </open/open.h>
inherit F_MASTER;
string song1();
string song2();
string dream();
string breakmethod();

void create()
{
set_name("³����",({"lu ton","lu","ton"}));
set("long","
³����ԭ��³�� ,��ͺ����������� ,��˵�����Ҷ�³�ʮ�ֽ̺� ,��һͬǰ����
���˵��ʵ��������Ҷ�³� .��Ҷ�³ǴӶ�孻���֮��ͷ⵶���ٳ����� ,ȴ������
�Ƴ�,���г�������һЩ��ֵ�(����) .
\n");
  set("gender","����");
  set("class","killer");
  set("title","�ϳ�ʦ");
  set("attitude","heroism");
  set("age",61);
  set("max_kee",3500);
  set("kee",3500);
  set("max_force",2000);
  set("force",2000);
  set("force_factor",10);
  set("combat_exp",1500000);
  set_skill("dodge",100);
  set_skill("move",100);
  set_skill("force",100);
  set_skill("parry",90);
  set_skill("shade-steps",100);
  set_skill("blackforce",100);
  map_skill("move","shade-steps");
  map_skill("dodge","shade-steps");
  map_skill("force","blackforce");
  set("chat_chance",10);
  set("chat_msg", ({
            ""+HIY+"³������������: ������� ,���������������Ե���ʯ�� ,��������������������~~"+NOR+"\n",
            ""+HIY+"³����˵��: ������....Ҫ����ʲô��?"+NOR+"\n",
               }));
  set("inquiry",([
"����" : (: song1 :),
"��" : (: song2 :),
"����" : (: dream :),
"���˵ķ���" : (: breakmethod :),
]));

setup();
add_money("gold",10);
}
void init()
{
add_action("do_report","report");
add_action("do_verify","verify");
}

int accept_kill(object who)
{
  command("say ��....�����۸���������....");
  return 1;
}
string song1()
{
 object ob;
 object me;
 ob=this_object();
 me=this_player();
if (me->query("class") != "killer" || me->query("quest/island") > 0)
{
  command("?");
  return "��˵ʲô??";
}
  command("look "+me->query("id"));
  command("say ԭ����"+me->query("name")+"��....�Դ��ҵ���������,���ǵ�һ������������������.");
  return "����(��)....";
}
string song2()
{
 object ob;
 object me;
 ob=this_object();
 me=this_player();
if (me->query("class") != "killer" || me->query("quest/island") > 0)
{
  command("?");
  return "��˵ʲô??";
}
tell_object(me,HIY"
³����͵͵����˵ :
��....���׸��ı���,�Ѿ���ʮ��û������������,û�뵽�����ٶ�����,�������Ҹе��ޱȵ��ź�.
���Ƕ�֪�������Ҹ�Ҷ�³�һͬ����孰�,���׸����Ҹ�һλ���Ů��������.�����ڶ��,��Ϊ����
�Ĺ�ϵ,��ʶ��һλ���Ů��.����һλ���вŻ��ֺ��м�ʶ��Ů��.��ʱ�����ʮ�ֵ�������.����
����һλ�������˵�Ů��,���ڸ��׹����Ĺ�ϵ,������������ȥ.����ȥ������˵Ĵ�,�������Ǹ�
Ů���̴�.��ʱ,�ҳ�������һͬ����.���֪��,����ɱ�ֲ����ں�ʱ,��������������̫��Ĺ�ͨ,
����,�������ȴ�������Ļ������̸��.���������������ҵ���ɫ�Լ���˵,�����õ���������Ҹ�
��ʮ�ֵ���Ȥ.ɱ�ֳ���ɱ¾����,��֪������������?!����ʱ���Ҿ;���...�����Ҳ��ʺϵ�ɱ�ְ�
,��Ϊ�Ҳ�û���㹻�Ķ���ѹ���Լ��ĸ��������.��Ҷ�˽��ҵ��뷨,���Ǿ�ͬ�����ڶ�孵�������
��֮��,�뿪������,���ҵ��������̽���µ�����.
\n"NOR);
 command("sigh");
tell_object(me,HIY"
�����������֮��,����Ҫ����Ҷ�뿪���ʱ,�ں���ȴ�����˶�孵ĺ���,���Ƕ����������̴�,��
�������ں��Ϸ����˼�ս,��ʱ����ֻ�������������ĸ���,�Ѳ�����,������ʱʧȥ���ҵ�����,Ҳ
ʧȥ���ҵ��,�ҵ�(����)....
\n"NOR);
 command("inn");
return "��ʱ��������Ҷʩչ���컨��������ɱ�˺ܶຣ��,�ҿ�������ͱ����������,�ǺǺǺ�....";
}

string breakmethod()
{
 object me= this_player();

  if (me->query("class") != "killer"|| me->query_temp("firstpart") !=3 )
  {
  	command("?");
  	return "��˵ʲô??";
  }

  tell_object(me,HIY"
�����˷��������ǲ������������˵�У�ɱ���и�(������)  ��˵���Բٿط��....
    ���������������ͻ������.....���ǳ���ɱ�������������ϵ�ɱ��֮��\n
  ����û����֪����һ���������࣬��ȥ�����������ϵ�ɱ�����ʰ�......��\n"NOR);
  me->set_temp("firstpart",4);
  return "ɱ�ֵ����ֺŲ������Ǽ����ˣ�������֪��(������)��.....";
}

string dream()
{
 object ob;
 object me;
 ob=new("/open/killer/island/obj/luamulet");
 me=this_player();
if (me->query("class") != "killer"|| me->query("quest/island") > 0)
{
  command("?");
  return "��˵ʲô??";
}
if (me->query_temp("get_luamulet") == 1)
  return "��û�ҵ��Ҷ�����??";
  command("sigh");
tell_object(me,HIY"
³���������ĳ��� : �������,���������������Ե���ʯ��,��������������������~~
\n"NOR);
tell_object(me,"һ������,³����������һ�������,����д�Źֵֹ�����,�ƺ��Ƕ������.�Ա�д��ʯ�������ĸ�����.\n\n");
ob->move( this_player() );
me->set_temp("get_luamulet",1);
return "���ǵ��������ҵĶ���֮��,��һ�Ե�....�����ϵ���д���ҵ�
            ����,�鷳���ø����ָ۵�³Ѱ,����������,ϣ�������Դ���Ѱ
            ��(���׵�����)!!";
}
int do_report()
{
object me=this_player();
if (me->query("quest/island") > 0)
{
command("smile");
return 1;
}
if (me->query_temp("care") == 1 || me->query_temp("complete")==1 )
{
 tell_object(me,HIW"\n�㽫���龭����һ�и���³��....\n"NOR);
 command("hmm");
 command("say �콫ذ���ø��ҿ���!!");
 return 1;
}
if (me->query_temp("care") == 2 )
{
 tell_object(me,HIW"\n�㽫���龭����һ�и���³��....\n"NOR);
 command("sigh");
 command("say �������޷��������ʵ��ջ�Ҳ��������....");
 command("say ����Ϊ�˸м���, �Ҵ�����һЩ��������ļ��ɺ���!!");
 me->set("quest/island",1);
 me->delete_temp("care");
 command("say �⼼�ɵ���ʹ��ǧ�ź�ʱ, ����Խ�������Ĺ������ӵ����쾡��!!");
 return 1;
}
command("?");
return 1;
}
int accept_object( object me , object ob ,object obj )
{
if (me->query_temp("complete") == 1 && ob->query("id") =="old dagger")
{
tell_object(me,HIY"³��һ����ذ��, �������ݺ⼤����˵��:\n"NOR);
tell_object(me,HIY"�¸���ʮ��, �����ڵõ����ҳ�����������!!������, ����лл����!!\n\n"NOR);
tell_object(me,HIC"���ذ��, ԭ����³������ϧ����������, ����³�ڳ�ŵ���ӽ���Ը��\n"NOR);
tell_object(me,HIC"����ɱ¾����������������������ʱ, ���������ذ��Ϊ����. ³����\n"NOR);
tell_object(me,HIC"���ӵ�ʱ����Ĺ�ͬ������ȫ���������ذ����. ���³������, ����\n"NOR);
tell_object(me,HIC"����, �������ǵ�������Ա˴˵İ�, ȴ����������ƾɵ�ذ����, ֱ\n"NOR);
tell_object(me,HIC"����Զ....\n"NOR);
command("say Ϊ�˸�л��, �ҽ������й��ڰ����ļ��ɴ��ڸ������!!");
command("say �⼼�ɵ���ʹ��ǧ�ź�ʱ, ����Խ�������Ĺ������ӵ����쾡��!!");
command("say ������Ҫǧ�ź�ʱ, ������������ȡ(verify)!!");
me->set("quest/island",3);
me->delete_temp("complete");
return 1;
}
if (me->query_temp("care") == 1 && ob->query("id") =="old dagger")
{
tell_object(me,HIY"³��һ����ذ��, �������ݺ⼤����˵��:\n"NOR);
tell_object(me,HIY"�¸���ʮ��, �����ڵõ����ҳ�����������!!������, ����лл����!!\n\n"NOR);
tell_object(me,HIC"���ذ��, ԭ����³������ϧ����������, ����³�ڳ�ŵ���ӽ���Ը��\n"NOR);
tell_object(me,HIC"����ɱ¾����������������������ʱ, ���������ذ��Ϊ����. ³����\n"NOR);
tell_object(me,HIC"���ӵ�ʱ����Ĺ�ͬ������ȫ���������ذ����. ���³������, ����\n"NOR);
tell_object(me,HIC"����, �������ǵ�������Ա˴˵İ�, ȴ����������ƾɵ�ذ����, ֱ\n"NOR);
tell_object(me,HIC"����Զ....\n"NOR);
command("say Ϊ�˸�л��, �ҽ������й��ڰ����ļ��ɴ��ڸ������!!");
command("say �⼼�ɵ���ʹ��ǧ�ź�ʱ, ����Խ�������Ĺ������ӵ����쾡��!!");
command("say ������Ҫǧ�ź�ʱ, ������������ȡ(verify)!!");
me->set("quest/island",2);
me->delete_temp("care");
return 1;
}
command("?");
return 1;
}
int do_verify()
{
object me,ob;
me=this_player();
if (me->query("quest/island") < 2)
{
command("say ��ûʲô�������Ը���!!");
return 1;
}
if (present("hate knife",me))
{
command("say ǧ�ź������ٸ���Ҫ��!!");
return 1;
}
if (me->query("quest/island")==3)
{
ob=new("/open/killer/obj/hate_knife");
ob->set_amount(1000);
ob->set("no_drop",1);
ob->set("no_give",1);
ob->set("no_sell",1);
ob->move(me);
command("say ǧ�ź�������??�����ٸ����!!");
return 1;
}
if (me->query("quest/island")==2)
{
ob=new("/open/killer/obj/hate_knife");
ob->set_amount(500);
ob->set("no_drop",1);
ob->set("no_give",1);
ob->set("no_sell",1);
ob->move(me);
command("say ǧ�ź�������??�����ٸ����!!");
return 1;
}
}
