inherit ROOM;
#include <ansi.h>

void create ()
{
  set ("short",HIC"段家交流厅"NOR);
  set ("long", @LONG

一进大厅，厅上挂着一赤金盘龙大匾，上头写着斗大的四个字‘ 段家
无敌’。大厅中摆着一块Board，是段家弟子互相交流的地方。左边则
是一块木板，上面刻有段家弟子的排行榜，可用list来看排行榜。



LONG);

  set("exits", ([ /* sizeof() == 3 */
  "home" : "/open/ping/room/p1",
  "down" : "/open/ping/room/tr1",
]));

  set("light_up", 1);
  set("valid_startroom",1);
  set("no_clean_up", 1);
  set("no_kill", 1);
  set("no_fight", 1);
  set("no_magic", 1);
                        
  setup();
  call_other("/obj/board/lord_b.c","????");
}



void init() {
        add_action("do_billing","list");
}

int do_billing(string str) {
        object *user,me;
        int i,j,k;

        user = users();
        me = this_player();

        for(i=j=0; i<sizeof(user); i++)
           if(user[i]->query("family/family_name") == "段家" &&
              !wizardp(user[i]))
              user[j++] = user[i];

        if(str == "combat_exp") {
           call_out("do_exp",0,user,j);
           return 1;
        }
        else if(str == "force") {
           call_out("do_force",0,user,j);
           return 1;
        }
        else if(str == "six-fingers") {
           call_out("do_sixfingers",0,user,j);
           return 1;
        }
        else
           return notify_fail("使用格式: list <种类>\n"
                              "经验值(combat_exp)\n"+
                              "内力(force)\n"+
                              "六脉神剑(six-fingers)\n\n");
}

int do_exp(object *user,int j) {
        object tmp;
        int i,k;

        for(i=0; i<(j-1); i++)
           for(k=i+1; k<j; k++) {
              if(user[k]->query("combat_exp") > user[i]->query("combat_exp")) {
                 tmp = user[i];
                 user[i] = user[k];
                 user[k] = tmp;
              }
        }

        printf(HIG"\t\t段家经验值排行榜:\n\n"NOR);
        for(i=0; i<j; i++)
           tell_object(this_player(),
              sprintf(HIC"\t第%2d名       %-18s %s(%s) \n"NOR,i+1,
                      user[i]->query("title"),
                      user[i]->query("name"),
                      user[i]->query("id")));

        printf("\n");
}

int do_force(object *user,int j) {
        object tmp;
        int i,k;

        for(i=0; i<(j-1); i++)
           for(k=i+1; k<j; k++) {
              if(user[k]->query("max_force") > user[i]->query("max_force")) {
                 tmp = user[i];
                 user[i] = user[k];
                 user[k] = tmp;
              }
        }

        printf(HIG"\t\t段家内力排行榜:\n\n"NOR);
        for(i=0; i<j; i++)
           tell_object(this_player(),
              sprintf(HIC"\t第%2d名       %-18s %s(%s) \n"NOR,
                      i+1,
                      user[i]->query("title"),
                      user[i]->query("name"),
                      user[i]->query("id")));

        printf("\n");
}

int do_sixfingers(object *user,int j) {
        object tmp;
        int i,k;

        for(i=0; i<(j-1); i++)
           for(k=i+1; k<j; k++) {
              if((int)user[k]->query_skill("six-fingers") > (int)user[i]->query_skill("six-fingers")) {
                 tmp = user[i];
                 user[i] = user[k];
                 user[k] = tmp;
              }
        }

        printf(HIG"\t\t段家六脉神剑排行榜:\n\n"NOR);
        for(i=0; i<j; i++)
           tell_object(this_player(),
              sprintf(HIC"\t第%2d名       %-18s %s(%s) \n"NOR,
                      i+1,
                      user[i]->query("title"),
                      user[i]->query("name"),
                      user[i]->query("id")));
        printf("\n");
}
