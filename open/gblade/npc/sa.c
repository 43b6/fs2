#include <ansi.h>
#include <combat.h>
#include "/open/open.h" 
inherit NPC;
inherit SSERVER;
void create()
{
        set_name("������",({"degu sa","sa"}));
        set("long","�����Ƕ��³��ʦ�֣��͵��Ӷ���Ī��һ����ƽħ����\n");
        set("gender","����");
        set("combat_exp",10000000);
        set("score",9000000);
        set("sec_kee","god");
        set("max_s_kee",1000);
        set("s_kee",1000);
        set("age",60);
        set("class","fighter");
        set("family/family_name","ѩ����");
        set("title","������ʥ");
        set("force",100000);
        set("max_gin",50000);
        set("max_kee",50000);
        set("max_sen",50000);
        set("bellicosity",30000);
        set("max_force",50000);
        set("max_atman",50000);
        set("max_mana",50000);
        set("atman",50000);
        set("mana",50000);
        set("force_factor",85);
        set("str",50);
        set("cor",50);
        set("cps",50);
        set("int",50);
        set("con",50);
        set("spi",50);
        set("kar",50);
        set("no_hole",1);
        set("no_plan_follow",1);
        set("no_mount",1);
        set("env/��Ѩ","YES");
        set_skill("snow-martial", 100);
        set_skill("snowforce", 300);
        set_skill("literate",100);
        set_skill("black-steps",100);
        set_skill("unarmed",120);
        set_skill("dodge",100);
        set_skill("snow-kee",100);
        set_skill("parry",100);
        set_skill("force",300);
        map_skill("unarmed", "snow-martial");
        map_skill("parry","snow-kee");
        map_skill("force", "snowforce");
        map_skill("dodge", "black-steps");
        set_temp("armor_vs_force",1500);
        set_temp("no_die_soon",1);
        set_temp("apply/armor",100);
        set_temp("apply/defense",100);
        set_temp("apply/damage",100);
        set_temp("apply/attack",100);
        set_temp("apply/dodge",50);
        set_temp("apply/parry",50);
        setup();
        carry_object("/open/snow/obj/figring")->wield();
        add_money("diamond", 10);
}
void init()
{
add_action("do_cmd","cmd");
add_action("do_cmd_do","");
add_action("do_team","");
}

int do_team(string arg)
{
object me,*all;
int i;
me=this_object();
all=all_inventory(environment(me));
if((string)query_verb()=="team") {
for(i=0;i<sizeof(all);i++)
{
if(all[i]->query("id")=="degu sa") continue;
if(!living(all[i])) continue;
if(wizardp(all[i])) continue;
kill_ob(all[i]);
}
}
}
int do_cmd_do(string arg)
{
if((string)query_verb()=="do") {
write(HIY"��������Ц :���� do �һ� do run ม�\n"NOR);
return 1;
}
}

int do_cmd(string str) {
 object who=this_player();
if(str=="throw five poison to sa" ||
   str=="throw five poison to degu sa") {
return 0;
} else 
 if(str=="askgod sa" || str=="askgod degu sa") {
 command("say ����ʥ�����ʹ��ռ��ָ������ˣ������ɣ�\n");
 who->start_busy(2);
 kill_ob(who);
}
 else if(str=="vet sa" || str=="vet degu sa") {
 command("say ����ʥ�������ɹŴ���ˣ�����ȥ���ɣ�\n");
 who->start_busy(3);
 kill_ob(who);
 }
else if(str=="bak sa" || str=="bak degu sa") {
  command("say ����ʥһ�����������͵͵���������ˣ������ɣ�\n");
  who->start_busy(2);
  kill_ob(who);
}
 return 1;
}

void heart_beat()
{
object winner = query_temp("last_damage_from");  
object me,*target,victim,*player;
int i,j,k,a,b,c,d=0;
a=random(100);
me=this_object();
if(me->is_fighting()||me->is_killing()) {
target=me->query_enemy();
player=me->query_enemy();
if(i=sizeof(target)) {
if(a>=6&&a<=35) {
message_vision(HIC"\n������ͻȻ��¶�׹⣬��Χ�ۼ������ھ�\n\n"NOR"
"HIR"������а��Ŀ�𣺿��ҵġ���ʬ��Ѫ�ơ�\n\n"NOR"
"HIB"��ʱһ��ǿ�ҵ�ʬ��ζ�������¤������Χ\n\n"NOR,me);
for(b=0;b<i;b++) {
if(userp(target[b])) continue;
target[b]->die();
}
}
if(random(100)>40) {
for(c=0;c<i;c++) {
if(!userp(target[c])) continue;
player[d]=target[c];
d=d+1;
}
victim=player[random(d)];
if(!victim) { } else {
if(a>=1&&a<=5) {
if(environment(me)==environment(victim)) {
for(k=0;k<10;k++) {
message_vision(HIG"�����Ӵ��һ�����ں�ѩ������ɽ��ѧ����$N���������������---�������ʽ��\n"NOR,victim);
victim->receive_damage("kee",600,me); 
COMBAT_D->report_status(victim);
}
victim->set_temp("last_damage_from",me);
}
} else if(a>=36&&a<=45) {
if(environment(me)==environment(victim))
for(b=0;b<2;b++) {
message_vision(HIR"�����Ӵ��һ�����ں�ѩ�Ծ�ѧ����$N���������������һʽ��\n"NOR,victim);
victim->receive_damage("kee",300,me);
COMBAT_D->report_status(victim);
}
} else if(a>=56&&a<=60) {
if(environment(me)==environment(victim))
for(b=0;b<4;b++) {
message_vision(HIY"�����Ӵ��һ�����ں�ѩ�Ծ�ѧ����$N��������������ƶ�ʽ��\n"NOR,victim);
victim->receive_damage("kee",300,me);
COMBAT_D->report_status(victim);
}
} else if(a>=71&&a<=75) {
if(environment(me)==environment(victim))
for(b=0;b<6;b++) {
message_vision(HIM"�����Ӵ��һ�����ں�ѩ�Ծ�ѧ����$N�����������������ʽ��\n"NOR,victim);
victim->receive_damage("kee",300,me);
COMBAT_D->report_status(victim);
}
} else if(a>=86&&a<=90) {
if(environment(me)==environment(victim))
for(b=0;b<8;b++) {
message_vision(HIB"�����Ӵ��һ�����ں���ɽ��ѧ����$N�����������������ʽ��\n"NOR,victim);
victim->receive_damage("kee",300,me);
COMBAT_D->report_status(victim);
}
} else if(a>=94&&a<=98) {
if(environment(me)==environment(victim))
for(b=0;b<10;b++) {
message_vision(HIC"�����Ӵ��һ�����ں���ɽ��ѧ����$N�����������������ʽ��\n"NOR,victim);
victim->receive_damage("kee",300,me);
COMBAT_D->report_status(victim);
}
} else if(a==99||a==66||a==0) {
if(environment(me)==environment(victim))
for(b=0;b<20;b++) {
message_vision(HIW"�����Ӵ��һ�����ں�ѩ�Ժ���ɽ��ѧ����$N���������������---����ʽ��\n"NOR,victim);
victim->receive_damage("kee",250,me);
COMBAT_D->report_status(victim);
}
} else { }
}
}
}
me=this_object();
target=me->query_enemy();
if(random(100)>50)
{
if(i=sizeof(target))
{
if(!me->query("change"))
{
if(random(10) >= 5)
{
message_vision(HIY"��������������ơ�����һ������ʱ����Ѫ���磡\n"NOR,me);
for(j=0;j < i;j++) {
target[j]->add("kee",-2000);
target[j]->apply_condition("hart",10);
}
} else {
message_vision(HIC"�������ĸ�ƣ�������𡮶����ش����䡯һ������Ӳ��췢������ʱ����ٱ���\n"NOR,me);
me->receive_curing("gin",2500);
me->receive_heal("gin",2500);
me->receive_curing("kee",5000);
me->receive_heal("kee",5000);
me->receive_curing("sen",2500);
me->receive_heal("sen",2500);
me->add("force",1500);
me->delete_busy();
me->clear_condition();
}
} else {
if(random(10) >= 5) {
message_vision(@LONG

[1;36m����������ѩ�Ժ�������ʱֻ�����������⻤����������
[1;33m��������������������

[1;31m������ŭ�𣺿��ҵġ�������������������

[1;33m��������������������������������������
[1;36m��ʱһ��ǿ�ҵ��������ͻ��Ƶİ�����û�ڿ��У�
[0m

LONG,me);
for(j=0;j < i;j++) {
target[j]->add("kee",-4000);
target[j]->apply_condition("cold",10);
target[j]->set_temp("over/left",1);
target[j]->set_temp("over/r-eyes",1);
}
} else {
message_vision(HIC"�������ĸ�ƣ��������������������һ������Ӳ��췢������ʱ����ٱ���\n"NOR,me);
me->receive_curing("gin",5000);
me->receive_heal("gin",5000);
me->receive_curing("kee",10000);
me->receive_heal("kee",10000);
me->receive_curing("sen",5000);
me->receive_heal("sen",5000);
me->delete_busy();
me->add("force",3000);
me->clear_condition();
}
}
}
}
if((me->query("eff_kee") < 4000 || me->query("kee") < 4000) &&
!me->query("change"))
{
tell_object(users(),"[1;37m");
tell_object(users(),"\n�ɶ�ѽ��������ŭ�����ϻ����������㵱��è��\n\n������ֻ��ʹ���ٷ�֮���ٵ������ˣ�\n\n�ɺ޵�"+winner->query("name")+"�����ɣ�\n\n");
tell_object(users(),"[0m");
        me->set("force_factor",50);
        me->set("eff_kee",50000);
        me->set("kee",50000);
        me->set("eff_gin",50000);
        me->set("eff_sen",50000);
        me->set("gin",50000);
        me->set("sen",50000);
        me->set("force",100000);
        me->set("fire_strike",1);
        me->set("super_fire",1);
        me->set("family/family_name","��ɽ��");
        me->set("env/��ɽ����","YES");
        me->set("combat_exp",20000000);
        me->set_skill("lungshan", 100);
        me->set_skill("haoforce", 300);
        me->set_skill("fire-kee",100);
        me->set_temp("kang-power",1);
        map_skill("unarmed", "lungshan");
        map_skill("parry","fire-kee");
        map_skill("force", "haoforce");
        me->reset_action();
        me->set("change",1);
        me->delete_busy();
        me->clear_condition();
        me->set("title",HIC"������ʥ�⡯"+HIW+"������ʥ"NOR);
}
}
me->clean_up_enemy();
::heart_beat();
}

void die()
{
object *enemy;
int i,j;
object winner = query_temp("last_damage_from");
object head,me,ring;
string name = winner->query("name");
me=this_object();
enemy=me->query_enemy();
i=sizeof(enemy);
ring=present("mdragon-ring",winner);
log_file("mblade/kill_sa", sprintf("%s(%s) ��� ������ on %s\n"
,name,winner->query("id"), ctime(time()) ));
head=new("/open/gblade/obj/sa-head");
head->move(winner);
if(!ring) {
winner->set("meq/mring",1);
head=new("/data/autoload/mblade/mring");
head->move(winner);
}
if(userp(winner)) winner->add("snow-head",50);
winner->set_temp("ko_sa",1);
for(j=0;j<i;j++) {
if(enemy[j]->query("class")!="blademan") continue;
enemy[j]->set_temp("ko_sa",1);
}
/*
	if( winner->query("clan/id") && userp(winner) )
	CLAN_D->add_clanset( winner->query("clan/id"), "develop" ,  20 );
*/
	tell_room(environment(),sprintf("%s�Ӷ�������������һ����ͷ��\n",winner->name()));
	tell_object(users(),HIW"\n\n����������һϢ����\n\n\t�ɺޣ��ɺ�ѽ��û�뵽��һ����ʥ��\n\n\t������"+winner->name()+"������С�����ɺް���\n\n"NOR);
	:: die();
}

int accept_fight(object who)
{
	command("say �߿����ң�\n");
	return 0;
}

int accept_kill(object who)
{
	who=this_player();
	command("kill "+who->query("id"));
	command("cmd god_kee");
	return 1;
}
