// Made by leei 
// ��ЩרΪɱ����д����ѻ� �����ǿ����Զ��б��
#include <ansi.h>
#include <combat.h>
inherit NPC;

//����ʽ
string bar_string =  "���������������������";
string blank_string= "�ѡѡѡѡѡѡѡѡѡѡѡѡѡѡѡѡѡѡѡ�";
string bmin_string=  "���������������������";
string status_color(int current, int max);
string gift_color(int k,int i);
string tribar_graph(int val, int eff, int max, string color);
int do_cmd_bak();
void do_cmd_exert();
void do_cmd_cast();
void do_cmd_exert() 
{
   command("exert "+query("env/cmd_exert") );
}
void do_cmd_cast()
{ 
  command("cast "+query("env/cmd_cast") );  
}
void create()
{
    set_name("��Ӱ��",({"sub"}) );
    set("long", "����һ����������ó����ķ�����Ӱ��(sub)��\n");
  set("chat_chance_combat", 90);
  set("chat_msg_combat", ({
   (: do_cmd_bak :), 
  }) );
  set("score",1000000);
    setup();
}
void init()
{
       int i;
       object *ppl;
       ppl = all_inventory(environment(this_object()));
       for( i=0; i < sizeof(ppl); i++ ) {
      //����������һ����ʹ����Ӱ��ʱ ���������������������
         if ( ppl[i]->query_temp("sub")=="USED" ) {
          if( this_object()->query("sub_id")==""+ppl[i]->query("id")+"" &&
              ppl[i]==this_player() ) {
                 
             add_action("see_hp","sc");
             add_action("leave","recall");
             add_action("do_cmd_bak","bak");
             add_action("help_sub","cmds");
          }
         }
        }
}

//ʹ��˵��
int help_sub()
{
write(@HELP
��Ӱ�߻����趨:   
���趨: %�� SET ָ��%
  un_manakee    : �趨��ʹ�� MANAKEE ����ڶ����ع���  
  auto_back     : �趨ս����Ϻ�/�Զ���λ��  
  cmd_bak       : �趨��ս����������Զ���ɱ�ж�/��װ��ذ��/��ȡ���Զ���λ��
  cmd_bellup    : �趨�ڷ�ս����ʹ�÷ų�ɱ����ָ�

        %�����������%
  cmd_perform   : �趨��manakee(����)��֮�书�ع�/ע���ʽΪ: �����书.�ع���
  cmd_exert     : �趨�ڹ��ع�/��ʽͬʹ�õ�ָ����趨��
  cmd_cast      : �趨ʩ���ع�/��ʽͬʹ�õ�ָ����趨��

��ȡ��: �� UNSET ָ��
  auto_back   : ȡ���Զ���λ�趨/��������ʱ���Ϊ�趨��
  cmd_bak     : ȡ���Զ���ɱ�ж��� 
   
����Ӱ��ָ���:
   cmds   : �ۿ�����ָ�
   recall : ���ط�������Ӱ�ߡ� 
   sc     : �ۿ���������˵ľ�����֮״̬��
   bak    : ��ս����ʹ��/�����Զ���ɱ�ж�,���ᰵɱ,����������������
            ս����ʹ��ʱ,������ذ��ʱ,�����ñ������̵��ˡ�
HELP); 
       return 1;
}
//ʹ�ñ���
int do_cmd_bak()
{
  int i;
  object *enemy=this_object()->query_enemy();
   i = sizeof(enemy);
   while(i--) {
    if( enemy[i] && living(enemy[i]) && !enemy[i]->is_corpse()) {
        command("cmd bak "+enemy[i]->query("id"));
         }
      }
   if ( ! is_fighting() ) { command("cmd bak invis"); }
   return 1;
}
//�����趨
void heart_beat()
{
      int i, j, k, l, z;
      object *ppl, *enemy, *kill, *inv, body;
      string sk , act, perform;

       // ���ķ�����������ֵ֮�� ���� 
     if( environment() && !is_fighting() ) {
        if ( !query("back_time") ) { 
               set("back_time",query("force")/5 );   }
           // �Զ������趨
        if ( query("back_time") > 10 && query("env/auto_back")!="YES" ) {
                 add("back_time",-1);  }             
      else {
           call_out("leave", 1);
             }
        
             //���̻����趨
             if ( query("env/cmd_bak")=="YES" && query_temp("invis") ) {
                 inv = all_inventory(environment());
                 for(l=0;l<sizeof(inv);l++) {                   
                    if ( query("sub_id")!=""+inv[l]->query("id")+"" ) {
                       if( inv[l]->is_character() || userp(inv[l]) )
                       command("cmd bak "+inv[l]->query("id"));
                                  }
                              }
                          }    
                       }
          //�ų�ɱ��
       if ( query("env/cmd_bellup")=="YES" && !query_temp("bell") ) {
            command("cmd bellup");   set_temp("bell",1);   }
          //�����ع�
       if (  !query_temp("CMD_PEC") ) {
         if ( query("env/un_manakee")!="YES" ) {
            add("chat_msg_combat",({ (: command,"perform throwing.manakee":),
                                   }) );  }   
         if ( perform=query("env/cmd_perform") ) {
            add("chat_msg_combat",({ (: perform_action, perform :), }) );  }
         if ( query("env/cmd_exert") ) {
            add("chat_msg_combat",({ (: do_cmd_exert :), }) ); }
         if ( query("env/cmd_cast") ) {
            add("chat_msg_combat",({ (: do_cmd_cast  :), }) );  }
         set_temp("CMD_PEC",1);
      }
            
          
      // ����һ����ս��,��һ�������ս��
      if(environment(this_object())){
      ppl = all_inventory(environment(this_object()));
      for( i=0; i < sizeof(ppl); i++ ) {
        if ( ppl[i]->query_temp("sub")=="USED" ) {
          if ( this_object()->query("sub_id")==""+ppl[i]->query("id")+"" ) {

            if ( ppl[i]->is_fighting() ) {                    
                 enemy = ppl[i]->query_enemy(); }
            else {  
                 enemy = query_enemy();         }

         j = sizeof(enemy);
         while(j--) {
         if( enemy[j] && living(enemy[j]) ) {
            if ( ppl[i]->is_fighting() && !is_fighting() ) { 
                        kill_ob(enemy[j]);
                        if( userp(enemy[j]) ) enemy[j]->fight_ob(this_object());
                        else enemy[j]->kill_ob(this_object());
         message("vision",
         MAG""+name() + "�ķ��� "HIC""+this_object()->query("old_name")+
         ""NOR""MAG" ����"+name()+"��Σ�� ����������Ԯ�ˡ�\n"NOR ,
         environment(),this_object() );

                                   }
            if (is_fighting() && !ppl[i]->is_fighting() ) {
                        ppl[i]->kill_ob(enemy[j]);
                        if( userp(enemy[j]) ) enemy[j]->fight_ob(ppl[i]);
                        else enemy[j]->kill_ob(ppl[i]);
         message("vision",
         MAG""+name() + " ����������Σ�� ���ϼ���ս���ˡ�\n"NOR ,        
         environment(),this_object() );

                                   }
                              
                               }
                          }
                      }
                  }
      }
      }
        ::heart_beat();
}
//�뿪�趨
int leave()
{
      int i, exp;
      object *ppl, fighter;
      exp = query("combat_exp") - query("old_exp");
      ppl = all_inventory(environment(this_object()));
      for( i=0; i < sizeof(ppl); i++ ) {
        if ( ppl[i]->query_temp("sub")=="USED" ) {
          if ( this_object()->query("sub_id")==""+ppl[i]->query("id")+"" ) {

            //ս���л���
            if ( is_fighting() ) {
              if ( ppl[i]->query("force") < 50 ) {
                return notify_fail("����������� �޷����ط���\n");
                               }
       ppl[i]->add("force",-50);
       message("vision",HIY""+name() +
       "���������,��æ�ؽлط���\n"NOR ,environment(),this_object() );
                     }
        fighter=new("/data/autoload/killer/pet2.c");
        fighter->set("name",""+this_object()->query("old_name")+"");
        fighter->move(ppl[i]);
        //���ӱ��ݾ���
        if ( exp > 0 ) { ppl[i]->add("sub_exp",exp); }
                  }
        ppl[i]->delete_temp("sub");
         }
      }
     message("vision",
       MAG""+name() + "�ķ��� "HIC""+this_object()->query("old_name")+
       ""NOR""MAG" �����ˡ�\n"NOR , environment(),this_object() );

        destruct(this_object());
        return 1;
}

//���г� �˿����ø����� ���еĶ����� 
void invocation(object me)
{
        string skill, m_skill, str, *gift, *sk, *en;
        int i, k, e, lv_1, lv_2;
        object *enemy, *eq, weapon, secondary, type, amount;
    mapping my=(mapping)me->query_entire_dbase();
    mapping skills = me->query_skills();
    mapping map =me->query_skill_map();

    //ɱ��
        enemy = me->query_enemy();
        i = sizeof(enemy);
        while(i--) {
                if( enemy[i] && living(enemy[i]) ) {
                        kill_ob(enemy[i]);
                        if( userp(enemy[i]) ) enemy[i]->fight_ob(this_object());
                        else enemy[i]->kill_ob(this_object());
                }
        }

   //�趨�츳
    gift= ({"long","con","str","int","spi","per","kar","cps","cor",
            "kee","eff_kee","max_kee","gin","eff_gin","max_gin","sen",
            "eff_sen","max_sen","force","max_force","atman","max_atman",
            "mana","max_mana","age","combat_exp","MKS","PKS","force_factor",
            "mana_factor","atman_factor","sub_exp","spells",
            "nickname","title","water","food","birthday","status","race",
            "bellicosity","potential","learned_points","gender","class",
            "describe","apply","functions","family","quest","quests","env"});

        for(i=0 ; i < sizeof(gift) ; i++) {
        set(""+gift[i]+"",my[gift[i]]);  }
        set("old_exp",my["combat_exp"] );
        set_name(my["name"],({"sub "+my["id"],my["id"],"sub"}));
   //�趨���� 
   sk = sort_array( keys(skills), (: strcmp :) ); ;
   for(i=0;i<sizeof(sk);i++) {
     set_skill(sk[i], skills[sk[i]] );

   //װ������
   en = ({"force","staff","throwing","array","blade","cure","dagger",
          "lance","magic","dodge","move","parry","poison","spells",
          "stabber","stick","sword","unarmed","whip"});

   for(k=0;k<sizeof(en);k++) {
   if ( SKILL_D(sk[i])->valid_enable(en[k]) && sk[i]==map[en[k]] ){
          map_skill(en[k],sk[i]);
          }
        }
      }

   weapon = me->query_temp("weapon");
   secondary=me->query_temp("secondary_weapon");
 
  //װ�����߼�˫�������������������趨
      eq = all_inventory(me);
      for(e=0; e<sizeof(eq); e++) {
         if( eq[e]->query("equipped") ) {      
               str=(string)base_name(eq[e]);                     
         
           if( weapon && weapon==eq[e] ) { 
               amount=carry_object(""+str+"");  
             if( (int)weapon->query_amount() > 1 ) {
               amount->set_amount( (int)weapon->query_amount() );
                                                   }
                               amount->wield(); 
                                         } 
             else { 
               type=carry_object(""+str+"");
                               type->wear();
                               type->wield();
                        }
                     } 
                  }   
        set_leader(me);
}

//�����趨
void die()
{
 int i, e;
 object *eq;
 object *ppl;

      eq = all_inventory(this_object());
      for(e=0; e<sizeof(eq); e++) {
                destruct(eq[e]);
                  }    

   ppl = all_inventory(environment(this_object()));
   for( i=0; i<sizeof(ppl); i++ ) {
        if ( ppl[i]->query_temp("sub","USED") ){
           if ( this_object()->query("sub_id")==""+ppl[i]->query("id")+"" ) {
          ppl[i]->set("monkey_lv",70);  
              }
          ppl[i]->delete_temp("sub");
         }
  }
  ::die();
}

//״̬˵��
int see_hp(string arg)
{
     int i;
     string str="",sta="",stb="";
     object *inv, wa, wb, ob;
     mapping my;
  
  if(!arg || arg == "") {  ob=this_object();  }
  else { ob = present(arg, environment(this_object()));  }
  my=(mapping)ob->query_entire_dbase(); 
  if ( !ob || !ob->is_character() || ob->is_corpse() ) { return 1; }

  printf("%s"NOR"֮״̬:\n",(my["back_time"]>0) ?
    "��ķ���"HIC""+my["old_name"]+"��" : "���ˡ�"HIC""+my["name"]+"��" );
  printf("%s  %s\n\n�� ���䣺%s��\t\t�Ա�%s %s\n�� ���� %s ����ĺö���\n\n",
   RANK_D->query_rank(ob),
   ob->short(),chinese_number(my["age"]),my["gender"],
   (my["back_time"]>0) ? 
   "\n�� ����"HIR""+chinese_number(my["back_time"])+""NOR"ϵͳʱ����λ"+
   "\n�� ������ӵ�� "+chinese_number(my["sub_exp"])+" �㾭��\t������ "+
   chinese_number(my["combat_exp"]-my["old_exp"])+" �㱸�ݾ���"
   : "" ,(my["combat_exp"] < this_object()->query("combat_exp")*3 &&
   my["combat_exp"] > this_object()->query("combat_exp")*8/10 ) ? "��" :
   "����",);
         
        
  write("������"+tribar_graph(my["gin"],my["eff_gin"],my["max_gin"],MAG)+"");
  printf("\t%s%3d/%d %s(%d%%) "NOR"�飺%s%3d/%d \n"NOR,
         status_color(my["gin"], my["eff_gin"]), my["gin"], my["eff_gin"],
  status_color(my["eff_gin"], my["max_gin"]), my["eff_gin"]*100/my["max_gin"],
  status_color(my["atman"], my["max_atman"]), my["atman"], my["max_atman"],);


  write("������"+tribar_graph(my["kee"],my["eff_kee"],my["max_kee"],CYN)+"");
  printf("\t%s%3d/%d %s(%d%%) "NOR"�ڣ�%s%3d/%d \n"NOR,
         status_color(my["kee"], my["eff_kee"]), my["kee"], my["eff_kee"],
  status_color(my["eff_kee"], my["max_kee"]), my["eff_kee"]*100/my["max_kee"],
  status_color(my["force"], my["max_force"]), my["force"], my["max_force"],);



  write("����"+tribar_graph(my["sen"],my["eff_sen"],my["max_sen"],YEL)+"");
  printf("\t%s%3d/%d %s(%d%%) "NOR"����%s%3d/%d \n"NOR,
         status_color(my["sen"], my["eff_sen"]), my["sen"], my["eff_sen"],
  status_color(my["eff_sen"], my["max_sen"]), my["eff_sen"]*100/my["max_sen"],
  status_color(my["mana"], my["max_mana"]), my["mana"], my["max_mana"],);

  
     inv = all_inventory(ob);
     for(i=0; i<sizeof(inv); i++) {
     if(inv[i]->query("equipped") )  {  
     str+= (inv[i]->query("armor_type")=="head"      ? "[ͷ��]": "");
     str+= (inv[i]->query("armor_type")=="cloth"     ? "[�·�]": "");
     str+= (inv[i]->query("armor_type")=="armor"     ? "[����]": "");
     str+= (inv[i]->query("armor_type")=="neck"      ? "[����]": "");
     str+= (inv[i]->query("armor_type")=="shield"    ? "[����]": "");
     str+= (inv[i]->query("armor_type")=="waist"     ? "[����]": "");
     str+= (inv[i]->query("armor_type")=="hands"     ? "[����]": "");
     str+= (inv[i]->query("armor_type")=="boots"     ? "[Ь��]": "");
     str+= (inv[i]->query("armor_type")=="cape"      ? "[����]": "");
     str+= (inv[i]->query("armor_type")=="armbands"  ? "[�ۻ�]": "");
     str+= (inv[i]->query("armor_type")=="leggings"  ? "[����]": "");

     wa=ob->query_temp("weapon");
     wb=ob->query_temp("secondary_weapon");
     sta+= (inv[i]==wa ? "["+inv[i]->query("name")+"]" : "");
     stb+= ((inv[i]==wb || inv[i]->query("armor_type")=="shield") ?
             "["+inv[i]->query("name")+"]" : "");
                                    }
             }
    printf("\n�� ���֣�%s\t\t���֣�%s\n", sta, stb,);
    printf("�� ������"HIY"%s\n" NOR, str,);
            
  return 1;
}
string status_color(int current, int max)
{
 int percent;

 if( max ) percent = current * 100 / max;
 else percent = 100;

        if( percent > 100 ) return HIC;
        if( percent >= 90 ) return HIG;
        if( percent >= 70 ) return HIY;
        if( percent >= 50 ) return HIM;
        if( percent >= 30 ) return HIB;
        if( percent >= 10 ) return HIR;
        return RED;
}
string tribar_graph(int val, int eff, int max, string color)
{
        return color + bar_string[0..(val*20/max)*2-1]
   + ((eff > val) ? blank_string[(val*20/max)*2..(eff*20/max)*2-1]: "")
   + ((max > eff) ? (bmin_string[(eff*20/max)*2..(max*20/max)*2-1]): "")
        + NOR;
}
string gift_color(int k,int i)
{
       int value=k - i ;
      if ( value >= 11 ) return BLU;
      if ( value >= 6 )  return CYN;
      if ( value >= 1  ) return YEL;
      if ( value == 0  ) return GRN;
      if ( value <= -1 ) return RED;
      return NOR;
}
