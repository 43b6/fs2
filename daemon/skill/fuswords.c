// fusword.c

#include <ansi.h>
#include <combat.h>
inherit SKILL;
inherit SSERVER;

void berserk(object me, object victim, object  weapon, int damage);

string *parry_msg=
    ({
      "$nʹ��������ѧ�е�������������$N���������˳�ȥ��\n",
      "$n���г������裬��������һ������$N�Ĺ��ƾ�������������\n",
      "$n����ת��һ��ƽƽ����������Ļ�����$N����ʽ��\n",
      "$nһ������$N��ҪѨ���Ƶ�$N�����������Ƿ���֮��߾���\n",
    });
string *array_msg=
    ({
      "[1;33m$N�������ڽ�ʿ���ŲȰ��ԣ��������ǣ��������������ӵ����¡�\n[0m",
      "[1;33m������ս��˳����ս���£��������֮���ӡ�\n[0m",
      "[1;33m$Nָ�����������˽���һ���е�����ˣ���ϵ������޷졣\n[0m",
     }); 
mapping *action = ({
        ([      
                "action"     :               "$NͻȻ�����ˡ������ķ����ĵ�������������ǰ����������һ�С����ഩ�֡���",
                "dodge"      :               -25,
                "parry"      :                20,
                "damage"     :                250,
                "damage_type":               "����"
        ]),
        ([     
                "action"     :               "$N�ս�֮��һ����������ǰ�̳���һ�С��������������$n��",
                "dodge"      :               -30,
                "parry"      :                25,
                "damage"     :                300,
                "damage_type":               "����"
        ]),
        ([   
                "action"     :               "$N��������б������Ѩ�����ὣ�⣬�Ͳ���ɨ������һ�С�������ӿ��",
                "dodge"      :                -30,
                "parry"      :                30,
                "damage"     :                400,
                "damage_type":               "����"
        ]),
        ([  
                "action"     :               "$N����֮�����û���������Ȧ���������⽫$n��Χ���У�����һ�С���תǬ����",
                "dodge"      :               -30,
                "parry"      :                30,
                "damage"     :                500,
                "damage_type":               "����"
        ]),
        ([ 
                "action"     :               "$N�����ڽ�������֮����Ȼ��ǰ��ȥ������һ�С�������ա���ȥ��֮��ʹ$n�����м�",
                "dodge"      :               -30,
                "parry"      :                20,
                "damage"     :                650,
                "force"      :                130,
                "damage_type":               "����"
        ]),
        ([
                "action"     :               "$N��ȻԾ�����࣬�ɰ������$n������������һ�С��������졯",
                "dodge"      :               -20,
                "parry"      :                35,
                "damage"     :                850,
                "force"      :                100,
                "damage_type":               "����"
        ]),
         ([     "action"     :               "$N�����˽����ϡ����಻����֮���壬�����彣һ����ʹ�������ഩ�֡��������������������ӿ�����ֹ�$n�����Ѩ",
                "dodge"      :                -35,
                "parry"      :                30,
                "damage"     :                1000,
                "force"      :                100,
                "post_action":                (: berserk :),
                "damage_type":                "����",
           ]),
          ([    "action"     :               "$N�����ˡ�����������֮���壬������ָ���ƿ���֮������$n�����Ǵ�˵�еġ���������",
                "dodge"      :                -40,
                "parry"      :                40,
                "damage"     :                1100,
                "force"      :                110,
                "post_action":                (: berserk :),
                "damage_type":                "����",
            ]),
            ([  "action"     :                "$N��������ν���Ծ��ƶ�����������������������$n��������һ��ʹ�������ഩ�֡��������������������ӿ������תǬ������������ա������γ����н�$n��Χ����",
                "dodge"      :                -30,
                "parry"      :                45,
                "damage"     :                1500,
                "force"      :                120,
                "post_action":                (: berserk :),
                "damage_type":                "����",
             ]),
             ([ "action"     :                "$N�ѵý�����Ҫ��һ�ۿ��Դ�$n֮��ʽ������һ�����ƽ�������ʽ�������ش������ǽ���֮����������ʤ���С�",
                "dodge"      :                -40,
                "parry"      :                45,
                "damage"     :                1700,
                "force"      :                120,
                "post_action":                (: berserk :),
                "damage_type":                "����",
             ]),
            ([  "action"     :                "$N��¶΢Ц�����Ӳ��죬��$n�����ѽ���ֻ�����н���������$N���ݵ��ս����ϣ�$nȴ���ܵ���������",
                "dodge"      :                -45,
                "parry"      :                50,
                "damage"     :                2000,
                "force"      :                130,
                "post_action":               (: berserk :),
                "damage_type":                "����",
             ]),            
             
   });
int valid_learn(object me)
{
       if( !me->query_temp("weapon") )
        return   notify_fail("�����������������ðѽ���\n");
        return   1;
}

int valid_enable(string usage)
{
        return ( usage=="sword" || usage=="parry" );
}

string query_parry_msg(string limb)
{
  int parry_pow;
  object me;
  me=this_player();
        parry_pow = (int)( me->query_skill("fuswords", 1)/10);
          if ( parry_pow <= 5)
                return parry_msg[random(2)];
            else

                return parry_msg[random(sizeof(parry_msg))];
}

mapping query_action(object me, object weapon)
{
       int skill_level, limit,i;
	   object victim,*enemy;
		enemy = me->query_enemy();
		i=sizeof(enemy);
        victim = enemy[random(i)];
        skill_level = (int)(me->query_skill("fuswords", 1));
        limit= (int)(skill_level/8);
        if( me->query_temp("use_form",1))
          message_vision( array_msg[random(sizeof(array_msg))],me );
if(me->query_temp("weapon"))
{
 weapon=me->query_temp("weapon");  //���Լ�force 200
if((me->query("class")=="dancer")&&(weapon->query("id")=="dragon sword"))
  {
if(me->query("id")==("cgy"))
{
message_vision(HIC"$Nʹ�����������ռ�����,ֻ��һ����������$nֱ�˶�ȥ\n"NOR,me,victim);
message_vision(HIR"                                        &.  &.     .\n"NOR,me,victim);
message_vision(HIR"                                        ~ss.&ss. .s'\n"NOR,me,victim);
message_vision(HIR"                                .     .ss&&&&&&&&&&s.\n"NOR,me,victim);
message_vision(HIR"                                &. s&&&&&&&&&&&&&&`&&Ss\n"NOR,me,victim);
message_vision(HIR"                                ~&&&&&&&&&&&&&&&&&&o&&&       .\n"NOR,me,victim);
message_vision(HIR"                               s&&&&&&&&&&&&&&&&&&&&&&&&s.  .s\n"NOR,me,victim);
message_vision(HIR"                              s&&&&&&&&&~&&&&&&~~~~&&&&&&~&&&&&.\n"NOR,me,victim);
message_vision(HIR"                              s&&&&&&&&&&s~~&&&&ssssss~&&&&&&&&~\n"NOR,me,victim);
message_vision(HIR"                             s&&&&&&&&&&'         `~~~ss~&~&s~~\n"NOR,me,victim);
message_vision(HIR"                             s&&&&&&&&&&.              `~~~~~&  .s&&s\n"NOR,me,victim);
message_vision(HIR"                             s&&&&&&&&&&&&s....               `s&&'  `\n"NOR,me,victim);
message_vision(HIR"                         `ssss&&&&&&&&&&&&&&&&&&&&####s.     .&&~&.   . s-\n"NOR,me,victim);
message_vision(HIR"                           `~~~~&&&&&&&&&&&&&&&&&&&&#####&&&&&&~     &.&'\n"NOR,me,victim);
message_vision(HIR"                                 ~&&&&&&&&&&&&&&&&&&&&&####s~~     .&&&|\n"NOR,me,victim);
message_vision(HIR"                                  ~&&&&&&&&&&&&&&&&&&&&&&&&##s    .&&~ &\n"NOR,me,victim);
message_vision(HIR"                                   &&~~&&&&&&&&&&&&&&&&&&&&&&&&&&&&&~   `\n"NOR,me,victim);
message_vision(HIR"                                  &&~  ~&~&&&&&&&&&&&&&&&&&&&&S~~~~'\n"NOR,me,victim);
message_vision(HIR"                             .   .~     '  &&&&&&&&&&&&&&&&####s\n"NOR,me,victim);
message_vision(HIR"                             &.          .s&&&&&&&&&&&&&&&&&####~\n"NOR,me,victim);
message_vision(HIR"                 .           ~&s.   ..ssS&&&&&&&&&&&&&&&&&&&####~\n"NOR,me,victim);
message_vision(HIR"                 &           .&&&S&&&&&&&&&&&&&&&&&&&&&&&&#####~\n"NOR,me,victim);
message_vision(HIR"                 Ss     ..sS&&&&&&&&&&&&&&&&&&&&&&&&&&&######~~\n"NOR,me,victim);
message_vision(HIR"                  ~&&sS&&&&&&&&&&&&&&&&&&&&&&&&&&&########~\n"NOR,me,victim);
message_vision(HIR"           .      s&&&&&&&&&&&&&&&&&&&&&&&&#########~~'\n"NOR,me,victim);
message_vision(HIR"           &    s&&&&&&&&&&&&&&&&&&&&&#######~~'      s'         .\n"NOR,me,victim);
message_vision(HIR"           &&..&&&&&&&&&&&&&&&&&&######~'       .....&&....    .&\n"NOR,me,victim);
message_vision(HIR"            ~&&&&&&&&&&&&&&&######~' .     .sS&&&&&&&&&&&&&&&&s&&\n"NOR,me,victim);
message_vision(HIR"              &&&&&&&&&&&&#####~     &. .s&&&&&&&&&&&&&&&&&&&&&&&&s.\n"NOR,me,victim);
message_vision(HIR"   )          &&&&&&&&&&&#####'      `&&&&&&&&&###########&&&&&&&&&&&.\n"NOR,me,victim);
message_vision(HIR"  ((          &&&&&&&&&&&#####       &&&&&&&&###~       ~####&&&&&&&&&&\n"NOR,me,victim);
message_vision(HIR"  )\\         &&&&&&&&&&&&####.     &&&&&&###~             ~###&&&&&&&&&   s'\n"NOR,me,victim);
message_vision(HIR" (   )        &&&&&&&&&&&&&####.   &&&&&###~                ####&&&&&&&&s&&'\n"NOR,me,victim);
message_vision(HIR" )  ( (       &&~&&&&&&&&&&&#####.&&&&&###'                .###&&&&&&&&&&~\n"NOR,me,victim);
message_vision(HIR" (  )  )   _.&~   &&&&&&&&&&&&######.&&##'                .###&&&&&&&&&&\n"NOR,me,victim);
message_vision(HIR" ) (  ( \\.         ~&&&&&&&&&&&&&#######....          ..####&&&&&&&&&&&~\n"NOR,me,victim);
message_vision(HIR"(   )& )  )        .&&&&&&&&&&&&&&&&&&####################&&&&&&&&&&&~\n"NOR,me,victim);
 message_vision(HIR"(   (&&  ( \\     _sS~  `~&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&S&&.\n"NOR,me,victim);
message_vision(HIR" )  )&&&s ) )  .      .   `&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&~'  `&&\n"NOR,me,victim);
message_vision(HIR"  (   &&&Ss/  .&.    .&..s&&&&&&##S&&&&&&&&&&&&&&&&&&&&&&&&S~~        '\n"NOR,me,victim);
message_vision(HIR"    \\)_&&&&&&&&&&&&&&&&&&&&&&&##~  &&        `&&.        `&&.\n"NOR,me,victim);
message_vision(HIR"        `~S&&&&&&&&&&&&&&&&&#~      &          `&          `&\n"NOR,me,victim);
message_vision(HIR"            `~~~~~~~~~~~~~'         '           '           '\n\n\n"NOR,me,victim);

 
message_vision(HIR"$n������������,˲ʱȫ���ǻ�ʹ�಻����\n"NOR,me,victim);
victim->add("kee",-100000);
victim->apply_condition("burn",random(10));
COMBAT_D->report_status(victim, 1);
  

me->add("force",-200);
}
}
}
        if (limit < 1 )
                return action[random(1)];
        if (limit < 2 )
                return action[random(2)];
        if (limit < 3)
                return action[random(3)];
        if (limit < 4)
                return action[random(4)];
        if (limit <5 )
                return action[random(4)+1];
        if (limit <6 )
                return action[random(4)+2];
        if (limit <7)                        
                return action[random(4)+3];
        if (limit <8)
                return action[random(4)+4];
        if (limit <9)
                return action[random(4)+5];
        if (limit <10)
                return action[random(4)+6];
        else
                return action[random(4)+6];
}

void berserk(object me, object victim, object  weapon, int damage)
{ 
     if( (int)me->query_skill("fuswords",1) > random(60)+35 && me->query("force_factor")>= random(5) && me->query("force")>30)
        { 
         if(!me->query_temp("berserk" ))
          {
             if(me->query("name")=="������")
             {
              message_vision( sprintf("[1;33mֻ��$N����һ������㽣��ٿȻ��ʧ����Ϊһ����������$n����ǰ�񱼶�ȥ������һ�С��������ڡ���$n�����Ī����˺���\n [0m"), me ,victim);
              victim->add("kee",-120);
              me->add("force",-10);
              }
                me->set_temp("berserk", 1);
            }
             me->delete_temp("berserk");
          }
      
} 


int practice_skill(object me)
{
        if( (int)me->query("kee") < 40 )
                return notify_fail("������������ˣ���Ϣһ�������ɡ�\n");
        if( (int)me->query("force") < 5 )
                return notify_fail("������������ˣ���Ϣһ�������ɡ�\n");
        me->receive_damage("kee", 40);
        me->add("force", -5);
        return 1;
}
