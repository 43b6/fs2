// ��������war ��ѩ��

#include <ansi.h>
inherit NPC;
void create()
{
            set("guild_master",1);
            set_name("Ѧ����",({"wind fighter","wind","fighter"}) );
            set("long","��Ӱ�ӣ������ײУ������֮�˽�����ɥ�����ഫ���ǹ�Ӱ���˵�ʦ\n�ܣ�Ҳ����˵������Х���ʦ�֣�������û��֪����ֻ֪����Ӱ����\n��ѩ��������ɽ��֮��ѧ������������������֮�£��Һ�������ʮ\n�������ܵС�\n");
            set("gender","����");
            set("class","fighter");
            set("nickname",HIR"��"NOR+RED"Ӱ"HIR"��"NOR);
            set("title",HIY"ѩ����"HIW"��"HIR"���־�"HIW"��"HIY"����"NOR);
            set("combat_exp",12000000);
            set("attitude","heroism");
            set("age",168);
            set("bellicosity",9999);
            set("str", 99);
            set("cor", 99);
            set("int", 99);
            set("spi", 99);
            set("cps", 99);
            set("per", 99);
            set("con", 99);
            set("kar", 99);
            set("kee",150000);
            set("gin",40000);
            set("sen",40000);
            set("atman",40000);
            set("mana",40000);
            set("force",2000000);
			set("max_kee",150000);
            set("max_gin",40000);
            set("max_sen",40000);
            set("max_mana",40000);
            set("max_atman",40000);
            set("max_force",15000);
            set("quests/read_snow",3);
            set_temp("roared", 1 );
            set("fire_strike",1);
            set("super_fire",1);
            set("env/��ɽ����","YES");
            set_temp("kang-power", 1 );
            set("quests/ya",1);
            set("go_ya",1);
            set_skill("unarmed",120);
            set_skill("parry",120);
            set_skill("move",120);
            set_skill("dodge",120);
            set_skill("magic",120);
            set_skill("spells",120);
            set_skill("force",350);
            set_skill("snow-martial",120);
            set_skill("lungshan",120);
            set_skill("snow-kee",120);
            set_skill("fire-kee",120);
            set_skill("black-steps",120);
            set_skill("henma-steps",120);
            set_skill("snowforce",277);
            set_skill("haoforce",277);
            set_skill("necromancy",120);
            set_skill("dremagic",120);
            map_skill("unarmed","snow-martial");
            map_skill("parry","snow-kee");
            map_skill("dodge","henma-steps");
            map_skill("move","black-steps");
            map_skill("force","haoforce");
            map_skill("spells","necromancy");
            map_skill("magic","dremagic");
            set_temp("apply/armor",100);
			set("random_move",200);
            set("functions/ice-fingers/level",100);
            set("functions/snow-powerup/level",100);
            set("functions/kang_kee/level",100);
            set("force_factor",90);
            setup();
            carry_object("/open/snow/obj/figring.c")->wield();
            carry_object("/open/snow/obj/liucloth.c")->wear();
			set("chat_chance",100);
            set("chat_msg",({
            (: random_move :),
	        }));
            set("chat_chance_combat",60);
            set("chat_msg_combat",({
            }));
}

int accept_fight(object who)
{
 who=this_player();
message_vision(sprintf("\n"HIY"���������������ʶ�Ϸ��"HIW"�� "HIG"�� "HIW"�� "HIG"�� "HIW"�� "HIB"ǧ "HIW"�� "HIM"�� "HIW"����\n\n"NOR),this_player());
 fight_ob(who);
// command("perform snow-kee.snow-powerup");
 return 1;
}

int accept_kill(object who)
{
who=this_player();
message_vision(sprintf("\n"HIC"�ߣ�С�������֣������ǵñ��Ϸ�ʹ�����徫�����Ը����ˣ�����\n\n        "HIW"��  "HIG"�� "HIM"�� "HIY"�� ��  "HIW"��  "HIM"��  "HIB"��  "HIG"��  "HIR"��  "HIW"��\n\n"NOR),this_player());
 kill_ob(who);
// command("perform snow-kee.snow-powerup");
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
  if(a >= 6 && a <= 35) {
    message_vision(HIY"\nѦ�������Ӱ����趯������ת����ͣ��˲Ϣ����ط·���ת������\n\n    "HIG"�� "HIM"�� "HIY"�� �� "HIW"֮ �� "HIB"��  ��  ��  ��  "HIR"��  ��  �� "HIW"��\n\n"HBRED+HIW"˲������Χ��Ȼ�����޹⣬������Է·��е�����֮��������������á�"NOR"\n\n"NOR,me);
    for(b=0;b<i;b++) {
    if(userp(target[b])) continue;
    target[b]->start_busy(1);
    }
  }
  if(random(100) > 40) {
  for(c=0;c<i;c++) {
  if(!userp(target[c])) continue;
  player[d]=target[c];
  d = d + 1;
  }
  victim=player[random(d)];
  if(!victim) { } else {
  if(a >= 1 && a <= 5) {
  if(environment(me) == environment(victim)) {
  for(k=0;k<10;k++) {
  message_vision(HIR"Ѧ��������������֮"HIG"�ռ�ɱ��"HIR"��"HIW"��"HIG"��"HIM"��"HIY"����"HIW"---"HBRED+HIW"�������"NOR+HIW"��"HIR"���಻���Ļ���$N\n"NOR,victim);
  victim->receive_damage("kee",400,me);
  COMBAT_D->report_status(victim);
  }
  victim->set_temp("last_damage_from",me);
  victim->start_busy(1);
  }
}
  else if(a >= 36 && a <= 45) {
  if(environment(me) == environment(victim))
  for(b=0;b<5;b++) {
  message_vision(HIG"Ѧ��������������֮"HIY"��а��"HIG"��"HIW"��"HIG"��"HIM"��"HIY"����"HIW"---"HBGRN+HIW"���ɨ��Ҷ"NOR+HIW"��"HIG"���಻���Ļ���$N\n"NOR,victim);
  victim->receive_wound("kee",300,me);
  COMBAT_D->report_status(victim);
}
} else if(a >= 56 && a <= 60) {
  if(environment(me) == environment(victim))
  for(b=0;b<6;b++) {
  message_vision(HIY"Ѧ��������������֮"HIB"��ѧ����"HIY"��"HIW"��"HIG"��"HIM"��"HIY"����"HIW"---"HBYEL+HIW"а��ħ��"NOR+HIW"��"HIY"���಻���Ļ���$N\n"NOR,victim);
  victim->receive_damage("kee",500,me);
  COMBAT_D->report_status(victim);
  }
}
  else if(a >= 71 && a <= 75) {
  if(environment(me) == environment(victim))
  for(b=0;b<6;b++) {
  message_vision(HIB"Ѧ��������������֮"HIM"������"HIB"��"HIW"��"HIG"��"HIM"��"HIY"����"HIW"---"HBBLU+HIW"ʯ���쾪"NOR+HIW"��"HIB"���಻���Ļ���$N\n"NOR,victim);
  victim->receive_wound("kee",400,me);
  COMBAT_D->report_status(victim);
  }
}
  else if( a >= 86 && a <= 90) {
  if(environment(me) == environment(victim))
  for(b=0;b<7;b++) {
  message_vision(HIM"Ѧ��������������֮"HIC"�����ķ�"HIM"��"HIW"��"HIG"��"HIM"��"HIY"����"HIW"---"HBMAG+HIW"��ˮ����"NOR+HIW"��"HIM"���಻���Ļ���$N\n"NOR,victim);
  victim->receive_damage("kee",600,me);
  COMBAT_D->report_status(victim);
  }
}
  else if(a >= 94 && a <= 98) {
  if(environment(me) == environment(victim))
  for(b=0;b<8;b++) {
  message_vision(HIC"Ѧ��������������֮"HIR"����ɱ��"HIC"��"HIW"��"HIG"��"HIM"��"HIY"����"HIW"---"HBCYN+HIW"�����޹�"NOR+HIW"��"HIC"���಻���Ļ���$N\n"NOR,victim);
  victim->receive_wound("kee",400,me);
  COMBAT_D->report_status(victim);
  }
}
  else if(a == 99 || a == 66 || a == 0) {
  if(environment(me) == environment(victim))
  for(b=0;b<9;b++) {
  message_vision(HIR"Ѧ��������������֮"HIG"���"HIY"����"HIR"��"HIW"��"HIG"��"HIM"��"HIY"����"HIW"---"HIG"����"HIM"�쳾"HIW"��"HIR"���಻���Ļ���$N\n"NOR,victim);
  victim->receive_wound("kee",500,me);
  COMBAT_D->report_status(victim);
  }
}
  else { }
  }
 }
}
me=this_object();
target=me->query_enemy();
if(random(100) > 50)
{
if(i=sizeof(target))
{
if(!me->query("change"))
{
if(random(10) >= 5)
{
message_vision(HIY"\nѦ��������"HIW"��"HIC"��"HIR"��"HIG"��"HIW"��"HIY"֮�����ھ����������ǰ��ֻ������ʹ������Ѫ����ֹ��\n"NOR,me);
for(j=0;j < i;j++) {
target[j]->add("kee",-500);
target[j]->apply_condition("hart",10);
}
} else {
message_vision(HIM"\nѦ��������"HIW"��"HIC"��"HIR"��"HIG"��"HIW"��"HIM"�����ķ������������ھ���ͣ����������Ҳ�����ظ��˲��١�\n"NOR,me);
me->receive_curing("gin",500);
me->receive_heal("gin",500);
me->receive_curing("sen",500);
me->receive_heal("sen",500);
me->add("force",1500);
me->delete_busy();
me->clear_condition();
}
} else {
if(random(10) >= 5) {
for(j=0;j < i;j++) {
message_vision(HIM"\n\n"HIC"Ѧ��������"HIW"��"HIC"��"HIR"��"HIG"��"HIW"��"HIC"�������ھ����ϵ�����ȫ����ɫ����Ĵ󺰣�\n\n"HIR"��Ϊ��"HIW"��"HIC"��Ϊ��"HIW"��"HIR"��"HIC"��"HIR"��"HIC"��"HIW"��"HIR"��"HIC"��"HIR"��"HIC"Ϣ\n\n"HIC"�� "HIR"�� "HIG"�� "HIB"�� �� �� �� "HIW"�� "HIM"��  "HIY"��  "HIC"��  "HIR"�� "HIW"��\n\n"RED"˲������ǿ�ҵ���������ɽ������Ľ�����û������\n"NOR,me);
target[j]->add("kee",-700);
target[j]->apply_condition("cold",10);
}
} else {
message_vision(HIY"\nѦ��������������ɢ���������в�֧����æ����"HIW"��"HIC"��"HIR"��"HIG"��"HIW"��"HIY"��ֻ��һ��ʥ�����֣�Ѧ�������ɫ���������˲��١�\n"NOR,me);
me->receive_curing("gin",500);
me->receive_heal("gin",500);
me->receive_curing("kee",500);
me->receive_heal("kee",500);
me->receive_curing("sen",500);
me->receive_heal("sen",500);
me->delete_busy();
me->add("force",2000);
me->clear_condition();
}
}
}
}
if((me->query("eff_kee") < 25000 || me->query("kee") < 25000) && !me->query("change"))
{
tell_object(users(),"");
tell_object(users(),"\n"HIC"Ѧ����ȵ����ɺ޵�"HIW""+winner->query("name")+""HIC"���ҿ����ǻ����ˣ�\n�����ҵ�ʹ���ҵ��汾���ˣ�׼�������ɣ�����\n\n"NOR);
tell_object(users(),"");
        me->set("force_factor",90);
        me->set("fire_strike",1);
        me->set("super_fire",1);
        me->set("family/family_name","��ɽ��");
        me->set("env/��ɽ����","YES");
        me->set("combat_exp",15000000);
		me->set("kee",80000);
        me->set("gin",40000);
        me->set("sen",40000);
        me->set("atman",40000);
            me->set("mana",40000);
            me->set("force",2000000);
			me->set("max_kee",80000);
            me->set("max_gin",40000);
            me->set("max_sen",40000);
            me->set("max_mana",40000);
            me->set("max_atman",40000);
            me->set("max_force",15000);
        me->set_skill("lungshan", 120);
        me->set_skill("haoforce", 277);
        me->set_skill("fire-kee",120);
        me->set_temp("kang-power",1);
        map_skill("unarmed", "lungshan");
        map_skill("parry","fire-kee");
        map_skill("force", "haoforce");
        me->reset_action();
        me->set("change",1);
        me->delete_busy();
        me->clear_condition();
        me->set("title",HIY"��ɽ��"HIW"��"HIC"���־�"HIW"��"HIY"����"NOR);
}
}
me->clean_up_enemy();
::heart_beat();
}

void die()
{
    object winner = query_temp("last_damage_from");
    string name = winner->query("name");
    string class1 = winner->query("family/family_name");
    if(!winner)
    {
    ::die();
    return ;
    }
    tell_object(users(),HIR"\n\n\n    ��ɪ�޶���ʮ�L    һ�Lһ��˼����\n\n        "HIC"ׯ�������Ժ���    ���۴����жž�\n\n            "HIG"�׺�����������\    ������ů������\n\n                "HIM"����ɴ���׷��    ֻ�ǵ�ʱ���Ȼ\n\n"HIY"����"HIM"Ѧ����"HIY"ƾ"HIC"��"HIR"��"HIY"����֮������ѧ�ݺ�������ʮ�꣬δ�����\n������"+HIG+class1+HIB"����"+HIY+name+HIY+"֮�֣��Ҳ����İ�������\n\n\n"NOR);
      message_vision(HIY"\n"+winner->name()+"����Ѧ����õ����ٵ�ս��!!\n"NOR,winner);
      write_file("/log/get_warp",sprintf("%s(%s) �õ����ٵ�ս���� %s\n",
          winner->name(1),winner->query("id"),ctime(time())));
          winner->add("war_score",300);
    ::die();
}
