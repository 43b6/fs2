//by roger
#include <ansi.h>
#include "/open/open.h"
inherit NPC;
inherit F_MASTER;
string do_array();
string do_tigi();
string do_sixplan();
string do_koming();
string do_sehan();
string do_hoba();
string do_book();


void create() {
        set_name(HIC"̫����"NOR,({"master wone","wone","scholar"}));
        set("class","scholar");
        set("nickname","$HIW$���µ�һ��ʦ$NOR$");
        set("title",HIY"������"NOR);
        set("long",
"̫����������������ȡ������֮��ž�ʦ, ���� 
�Դ�������ı, ��ʤ���ӱ����� 
");
        set("inquiry", ([
        "������"        : (: do_array :),
        "������"        : (: do_koming :),
        "���"          : (: do_sixplan :),
        "̫������"    : (: do_tigi :),
        "���հ"      : (: do_sehan :),
        "�������"    : (: do_hoba :),
        "����ױ�"      : (: do_book :),
]));
        set("str",40);
        set("cor",25);
        set("gender","����");
        set("guild_master",1);
        set("attitude","heroism");
        set("family/family_name","����");
        set("max_gin",5000);
        set("max_kee",8000);
        set("max_sen",8000);
        set("max_force",8000);
        set_skill("sixgod-plan",120);
        set("combat_exp",5000000);
        set("functions/movedown/level",100);
        set("functions/finger/level",100);
set("chat_chance_combat", 100);
set("chat_msg_combat",({
(: perform_action("stabber.movedown") :),
(: perform_action("stabber.finger") :),
}));
        set("chat_chance",50);
        set("chat_msg",({
        }));
        setup();
       carry_object("/open/scholar/room/newplan/obj/pen")->wield();
       add_money("gold",50);
 }
string do_array()
{
        object me=this_player();
        if(me->query_temp("six_ask")==8)
        {
          me->set_temp("six_ask",9);
        return("
          ������������������֮����, ���Ҫ
        ����ȥ, ����Ҫ�˽�̫������֮�仯��");
}
else
        return("���˱�̫����, ���ǵ�!!!");
}
string do_koming()
{
        object me=this_player();
          if(me->query_temp("six_ask")==5)
        {
          me->set_temp("six_ask",6);
          return("
          ��˵������??��������������ʱ���Ĵ��
          ʦѽ, ���ŵ������������ɿ�����д
          , ���������������Ķ�����û���ҵ� 
          �������ļ�ı�߼�, ������������
          ���ҵ���躽�ȥ, ��û�뵽����֮����
          �Ͳ�����, �����������Ĵ������հ��");
        }
        else
        return("����??����Ϲ���۸�..���Գ���???");
}          
string do_sehan()
{
        object me=this_player();
        if ( me->query_temp("six_ask")==6)
        {
          me->set_temp("six_ask",7);
          return("
          ���հ���������ĺ���, Ҳ��һ����
          ����ı����, ������ȴ����躸�������
          С�Ķ���������ѡ�");
        }
        else
          return("ȥ����!!�˼ҵĶ����ֲ���������, �۰���!!");
}
string do_hoba()
{
        object me=this_player();
        if( me->query_temp("six_ask")==7)
        {
          me->set_temp("six_ask",8);
          return("
          ������������һ�ŵİ���, ������
          ��躴���Σ��������, ����Ұ���ȡ��
          ��, �����������Ϊ�ڰ�������!!");
        }
        else
          return("ʲôʲô???");
}
string do_sixplan()
{
        object me=this_player();
        if( me->query("family/family_name")=="����" && (me->query_temp("six_ask")==4))
        {
          me->set_temp("six_ask",5);
          return("
          �������д��ս���鼮֮һ, �����Ұ�����������������
          �ɡ�");
        }
        else
        return("����??���Գ���??��");
}
string do_tigi()
{
        object me=this_player();
        if( me->query_temp("six_ask")==9)
        {
          me->set_temp("six_ask",10);
          return("
          �������зְ�������, �߷���������������̫��������
          ��, ���ǿ�������, �����������Ե�ԭ����д�ɵ�, ����
          ���ܻ��������ֵ���, ��ʵ���ͽ����������ڴ�ɽ������
          ����ȥ��ȥ��, �������ˡ�
        ");
        }
        else
          return("̫��������~~~~ya~~~");
}
string do_book()
{
        object me=this_player();
        object ob;
        if(me->query("family/family_name") != "����")
        return("������Ҳû��!!\n");
        if(me->query_temp("get_sixgod_book"))
        return("���Ѿ��ù�����!!\n");
        if(!me->query("mark/sixgod-plan"))
        return("����..������Ҳû����ѽ?!!\n");
        else
        {
        ob=new("/u/s/sueplan/obj/book1");
        ob->move(me);
        message_vision("̫��������$Nһ����\n",me);
        }
}

int accept_object(object me, object obj)
{
        if( obj->query("id") == "sixgod-plan book" )
        {
if( me->query_temp("ko_houng") == 1 && !me->query("mark/sixgod-plan") && me->query_temp("ko_hace")==1 && me->query_temp("ko_show")== 1 && me->query_temp("ko_kao")==1 && me->query_temp("ko_yea")== 1 && me->query_temp("ko_jone")== 1)
          {
            command("say ��Ȼ���ȡ��������й�, �ұ㽫��������ϼ��صļ�ı
��������ɡ�");
tell_object(me,"��ʯ������˵ : �Ժ���Ե��������߲ʷ�˱�(want �߲ʷ�˱�)��\n");
tell_object(users(),"
[1;37m̫��������ˬ�ʵ�Ц�� :
[1;37m    ��         ��������һı�ԵĽ���"+me->query("name")+"ѽ����
[1;33m    ���Ȼû������ʧ�������ðɣ��Ҿʹ����ҵı�����ѧ -\n
[1;5;36m           ����   �   ��    �ԡ�[0m\n\n");
        me->set("mark/sixgod-plan",1);
        me->set("title","[1;36m����[1;37m��[1;45;37m�������[1;0m[1;37m��[1;33m����[0m");
          }
          destruct(obj);
        }
        else
        {
        command("kick "+getuid(me));
        command("say �ⶫ���������İ�???");
        }
        return 1;
}
void init()
{
add_action("do_change","change");
add_action("do_want","want");
}

int do_change(string str)
{
  object me = this_player();
  if(str=="title")
  {
  if(!me->query("mark/sixgod-plan"))
  return notify_fail("�㻹ûѧ���������\n");
  if(me->query("family/family_name")!="����")
  return notify_fail("���Ѳ�������֮��\n");
me->set("title",
"[1;36m����[1;37m��[1;45;37m�������[0m[1;37m��[1;33m����[0m");
  tell_object(me,"title�޸����\n");
  return 1;
  }
}

int do_want(string arg)
{
  object me = this_player();
  object pen = new("/open/scholar/room/newplan/obj/bird_pen.c");
  if(!arg||arg!="�߲ʷ�˱�")
  return notify_fail("����Ҫʲô???\n");
  if(!me->query("mark/sixgod-plan"))
  return notify_fail("��δ�������!!\n");
  if(me->query("family/family_name")!="����")
  return notify_fail("���Ѳ�������֮��\n");
  if(me->query_temp("ok_get_pen"))
  return notify_fail("���Ѿ��ù�����\n");
  me->set_temp("ok_get_pen",1);
  pen->move(me);
  tell_object(me,"��ȡ����һ֧�߲ʷ�˱ʡ�\n");
  return 1;
}
