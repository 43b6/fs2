//made by fund//change and organization by Urd Ů��

#include <ansi.h>
#include "/open/open.h"
inherit NPC;
inherit F_MASTER;
string to_kill();
string to_hurt();
string to_miss();
string ask_blade();

void create()
{
object ob;
set_name("Ҷ��ɱ",({"master yar","yar","master"}));
set("long","�������𽭺���һ��ɱ�֣���������ͷĿ��\n");
set("gender","����");
set("class","killer");
set("nickname","ɱ������");
set("combat_exp",1000000);
set("attitude","heroism");
set("age",26);
set("str", 44);
set("cor", 34);
set("cps", 18);
set("per", 24);
set("int", 42);
set("kee",3000);
set("max_kee",3000);
set("gin",1600);
set("max_gin",1600);
set("atman",1200);
set("max_atman",1200);
set("mana",1000);
set("max_mana",1000);
set("force",3500);
set("max_force",3500);
set_skill("rain-throwing",100);
set_skill("blade",50);
set_skill("cure",50);
set_skill("literate",40);
set_skill("dodge",90);
set_skill("force",80);
set_skill("move",100);
set_skill("parry",80);
set_skill("dagger",90);
set_skill("poison",60);
set_skill("sword",50);
set_skill("throwing",100);
set_skill("shade-steps",100);
set_skill("blackforce",95);
map_skill("throwing","rain-throwing");
map_skill("dodge","shade-steps");
map_skill("force","blackforce");
set("force_factor",10);
set_temp("apply/armor",70);
set("inquiry",([
"׷ɱ��" : (: to_kill :),
"ħ��ɱ֮��" : (: to_hurt :),
"����" : (: to_miss :),
"����ħ��" : (: ask_blade :),
]));
set("force_factor",10);
set("chat_chance_combat",40);
set("chat_msg_combat",({
(:perform_action,"throwing.rain":)
}));
setup();
create_family("������",2,"��ϯ");
ob=carry_object("/open/killer/obj/hate_knife");
ob->set_amount(100);
ob->wield();
carry_object("/open/killer/weapon/k_cloth3.c")->wear();
carry_object("/open/killer/weapon/k_boot3.c")->wear();
carry_object("/open/killer/weapon/k_arm3.c")->wear();
carry_object("/open/killer/weapon/k_head3.c")->wear();
}
void init()
{
add_action("do_join","join");
}
string to_kill()
{
object ob;
if( this_player()->query("quests/to-kill") ) {
command("?");
return "$N�����ɱ˭��......";
}
if( present("letter",this_player() ) ){
command("?");
return "$N�Ѿ��õ��ܺ���...������??";
}
command("look "+this_player()->query("id"));
command("hmm");
ob = new(__DIR__"letter");
ob->move( this_player() );
message_vision("$N�ݸ�$nһ���ܺ���\n",this_object(),this_player());
return "������д�ű�׷ɱ����........";
}

string to_hurt()
{
 object ob;
 object me;

 me=this_player();
 if( me->query_temp("hurt") !=1 )
 {
   command("?");
   return "$N��˵ʲôѽ��";
 }
 tell_object(me,HIY"���������������������������ˣ���������ǰ������\n");
 tell_object(me,"�����������˵������֮�У���װ���Ѷ���ʹ�뿪��ׯ����\n");
 tell_object(me,"����Ϊ�˱���ׯ������޶��߻���ħ��������ħ�����ȡ��\n");
 tell_object(me,"���������˺���������ǰ����ϯҶ�³ǵ�ָ���´����˰���ʽ\n");
 tell_object(me,"��ʱ��ʦ����ԭ��Ҫ����ϯ֮λ�������٣�������Ϊׯ�����Ե��\n");
 tell_object(me,"Ϊ��ɱ�ֵİ�ȫ��ʦ�����㽫��ϯ֮λ�������ң�������������뿪�����и��ϲ����ѧ\n");
 tell_object(me,"���ǲ���������һֱ�����ž��ᣬ�������˵�ʱ�ı���ʹ���պ���\n");
 tell_object(me,"����ħ����󷨣�����ׯ���Ტ�ҽ������\n");
 tell_object(me,"��֪�����պ�������̰�����ħ����󷨶��̣�������ɱ�˺ü�λħ��ͽ\n");
 tell_object(me,"�޻������٣���������ׯ�����ȫ��׷ɱ���ʹ����ֻ���������������\n");
 tell_object(me,"���������������ڤ��ħ�̵�ȫ��Ծ�����ʹ�¼�ƽ��������\n");
 tell_object(me,"���ǣ�����������ԭ�²��٣���Ϊ����������\n");
 tell_object(me,"�����㽫���ǵĶ�������-����ذ�ס�������������Ҳ����������ʱ������\n");
 tell_object(me,"���еĲ���ħ��ɱ��������ħ����󷨵�������ָ��Ŀǰֻ�о������ᡣ\n");
 tell_object(me,"��ˣ�������ħ����󷨱��������˰�\n");
 tell_object(me,"����ذ������¥�ı��߷��䣬������һ��ʬ������ס��ɱ�����Ϳ��Եõ�\n"NOR);
 me->set_temp("god",1);
 return "$N����¥����һ�£������ҵ���ȥ�Ŀ���";
}
string to_miss()
{
 object ob;
 object me;

 me=this_player();
 if( me->query("quest/rain") !=1 )
 {
   command("sm");
   return "$N��ħ��ɱ�������ᣬ�����ʲô����";
 }
 tell_object(me,"��˵����Ҷ���ж�������ɵ�����Ǳ�룬ֻ�ж���һ��\n");
 tell_object(me,"��ȥ����ɱ�ˣ�װ������¥���Լ�ȥ��\n");
  me->set_temp("mission1",1);
 return "��ͷ�Լ���ȥ��Ǯ";
}

void attempt_apprentice(object ob)
{
command("l "+ob->query("id"));
if(this_player()->query("cor")<20)
{
command("sigh "+ob->query("id"));
command("say ��ĵ�ʶ����, �Ҳ����ա�\n");
return;
}
command("smile");
command("nod");
command("say �ã���");
command("recruit "+ob->query("id"));
}
int accept_fight(object ob)
{
command("say ���й���������, �ҽ�����ս����");
message_vision( this_object()->name()+"����¶�����˵����ӡ�\n",ob);
this_object()->set("bellicosity",1000);
command("cmd bellup");
return 1;
}
int accept_kill(object ob)
{
command("say û�뵽��Ȼ���˸�������Ұ����");
message_vision( this_object()->name()+"ͻȻ���������ϳ���ɱ����\n",ob);
this_object()->set("bellicosity",3000);
command("cmd bellup");
return 1;
}
int do_join()
{
object ob=this_player();
if(!ob->query("class"))
{
ob->set("class","killer");
command("nod "+ob->query("id"));
}
else
{
command("say ־��ͬ������, ������ʦȥ�ɡ�\n");
return 1;
}
message("system",
HIB "���Ҷ����������С���\n\n�ֳ���һ���ֲ���ɱ�֡���\n" NOR,users());
return 1;
}
int accept_object( object me , object ob )
{
object obj;
if( !ob->query("true-corpse") )
{
command("say ��ô������?");
return 0;
}
if( me->query("quests/to-kill") ) return 0;
command("nod");
obj = new("/open/snow/obj/ghost-blade");
obj->move(this_player());
message_vision("$N��$nһ��"+obj->name()+"��\n",this_object(),
this_player());
me->set("quests/to-kill",1);
}
string ask_blade()
{
object ob;
if( present("ghost blade",this_player()) ) return "��Ҫ��ô ?";
if( !this_player()->query("quests/to-kill") ) return "��Ҫ��ô ?";
ob = new("/open/snow/obj/ghost-blade");
ob->move(this_player());
message_vision("$N��$nһ������ħ����\n",this_object(),this_player());
return "��Ҫ��Ū����...";
}