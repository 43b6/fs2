// natured.c

#include <obj.h>
#include <ansi.h>
#include <login.h>
#define INTERMAIL_I "/data/intermail_i"
#ifdef WEATHER
static int current_day_phase;
static int current_weather=0;
static int c=0;
static int weather_hurt=0, weather_light=1;

mapping *day_phase;
mapping *weather;

mapping *read_table(string file);
void init_day_phase();
void init_weather();
void check_heart_beat();
#endif

int     clan_30min, clan_1hr, clan_2hr, clan_12hr;
void    clan();

#ifdef SEND_MONEY
void send_money();
static int send_money_time=0;
#endif
void auto_reboot();
void sp_boss();
void init_mail();
void sys_init();
void war_start();
void do_full();

int reboot_flag=0;

void create()
{
#ifdef WEATHER
        day_phase = read_table("/adm/etc/nature/day_phase");
        init_day_phase();

        weather = read_table("/adm/etc/nature/weather");
        init_weather();
#endif
#ifdef SEND_MONEY
        send_money();
#endif
        clan();
        init_mail();
        auto_reboot();
	war_start();
	// do_full();
        sp_boss();
        sys_init();
        call_out( "check_heart_beat", 10 );
}

// /*
void init_mail()
{
  mapping       cont;
  object        mailbox;
  string        mail, *mails;
  string        from, to;
  int           i, j, k;
  mail = read_file (INTERMAIL_I);
  if (!mail) mail = "";
  rm (INTERMAIL_I);
  mails = explode (mail, "\n");

  for (i=1; i<sizeof (mails); i++) {
    if (j == 0) {
      if (mails[i-1][0..8] == "#mailto: " && mails[i][0..10] == "#mailfrom: ") {
        j = 1;
        k = i+1;
        from = mails[i][11..<1];
        to = mails[i-1][9..<1];
      }
    }
    else if (j == 1) {
      if (mails[i-1][0..8] == "#mailto: " && mails[i][0..10] == "#mailfrom: ") {
        mail = implode (mails[k..i-2], "\n");
        mail = ">>> 这是一封来自网际网路的信, 如果要回信, 请寄到:\n>>> "+
               from+"\n>>> 回信请用 imail 命令.\n"+mail;
        seteuid (ROOT_UID);
        mailbox = new (MAILBOX_OB);
        cont = ([
          "from"        : from,
          "title"       : "网际网路信件",
          "to"          : to,
          "text"        : mail,
        ]);
        mailbox->send_mail (to, cont);
        destruct (mailbox);
        k = i+1;
        from = mails[i][9..<1];
        to = mails[i-1][9..<1];
      }
      else if (i == sizeof (mails)-1) {
        mail = implode (mails[k..i], "\n");
        mail = ">>> 这是一封来自网际网路的信, 如果要回信, 请寄到:\n>>> "+
               from+"\n"+mail;
        seteuid (ROOT_UID);
        mailbox = new (MAILBOX_OB);
        cont = ([
          "from"        : from,
          "title"       : "网际网路信件",
          "to"          : to,
          "text"        : mail,
        ]);
        mailbox->send_mail (to, cont);
        destruct (mailbox);
      }
    }
  }

  call_out ("init_mail", 288);
}

//用来放在开机时需要乎叫的code
void sys_init()
{
        mixed *files;
        string dir;
        int i,len;

        dir="/daemon/skill/";
        files=get_dir(dir,-1);
        i=sizeof(files);
        while(i--)
        {
          len=sizeof(files[i][0]);
          if(files[i][0][len-2..len-1]!=".c")
            continue ;
          call_other(dir+files[i][0], "???");
        }
}

/*void find_robot()
{
        int     i;
        object  *user;

        if( ((time()+28800)%86400) < 28800 ) {
                call_out( "find_robot", 300+random(1500) );
                return;
        }

        remove_call_out("robot_ans");
        remove_call_out("find_robot");
        user = users();
        for( i=0; i<sizeof(user); i++ ) {
                if(     wizardp(user[i])                        || // 巫师
                        user[i]->is_fighting()                  || // 战斗
                        user[i]->query_temp("pk_fight")         || // pkla
                        user[i]->query_temp("unconcious")==1    || // 晕倒
                        user[i]->query_temp("netdead")          || // 断线
                        (query_idle(user[i])/60) > 1            || // 发呆
                        user[i]->is_ghost()                     || // 鬼魂
                        random(2)==1                            || // 50%
                        !user[i]->query("id")                      // login
                        )
                        continue;
                if(     in_edit(user[i]) || // 编辑
                        in_input(user[i])){ // 阅读
                  user[i]->set_temp("wait_ask",1);
                  continue;
                }
                ask_question(user[i]);
        }
        call_out( "robot_ans", 180 );
        call_out( "find_robot", 300+random(1500) );
}
void ask_question(object ppl)
{
    int ans;
    if(!ppl) return ;
    ans = random(100000) + 1;
    tell_object( ppl,
            HIW + "\n***************************************************************\n" +
            HIW + "\n\t系统要清查机器人, 请回答下面问题:\n"+
            HIW + "\n***************************************************************\n");
    tell_object( ppl,
            sprintf("‘请用 ans 回答以下是甚么数字？’\n%s", paper(""+ans)) );
    ppl->set( "robot/ans", ""+ans );
    tell_object( ppl,
            HIW+"***************************************************************\n"NOR);
}
void robot_ans()
{
        int     i;
        object  *user;

        remove_call_out("robot_ans");
        user = users();
        for( i=0; i<sizeof(user); i++ ) {
                if(     user[i]->is_fighting()                  || // 战斗
                        user[i]->query_temp("pk_fight")         || // pkla
                        user[i]->query_temp("unconcious")==1    || // 晕倒
                        user[i]->query_temp("netdead")          || // 断线
                        (query_idle(user[i])/60) > 1            || // 发呆
                        user[i]->is_ghost()                     || // 鬼魂
                        !user[i]->query("robot/ans")               // login
                        )
                        continue;
                if(     in_edit(user[i]) ||// 编辑
                        in_input(user[i])){// 阅读
                        user[i]->set_temp("wait_get",1);
                        continue;
                }
                get_robot(user[i]);
        }
}
void get_robot(object ppl)
{
    if(!ppl) return ;
    tell_object( ppl, "你已经没有机会回答问题。\n" );
    ppl->move("/open/wiz/jail.c");
    if( !ppl->query("jail_time") ) {
            ppl->set( "jail_time", ppl->query("mud_age")+60*10 );
            return ;
    }
    ppl->set( "jail_time", ppl->query("jail_time")*2-ppl->query("mud_age") );
    if( ppl->query("jail_time")-ppl->query("mud_age")>60*60*12 )
            ppl->set( "jail_time", ppl->query("mud_age")+60*60*12 );
}
*/
void clan()     //帮派的时间判断
{
        int period, time, now = uptime();

        period = 1800;        //per 30 min
        time = now+period/2;
        if( time/period > clan_30min ) {
                CLANV_D->clan_log();
                clan_30min = time/period;
        }

        period = 3600;        //per 1 hour
        time = now+period/2;
        if( time/period > clan_1hr ) {
                CLANV_D->clan_tax();
                clan_1hr = time/period;
        }

        period = 7200;        //per 2 hour
        time = now+period/2;
        if( time/period > clan_2hr ) {
                CLANV_D->clan_cost();
                CLANV_D->clan_develop();
                clan_2hr = time/period;
        }

        period = 43200;        //per 12 hour
        time = now+period/2;
        if( time/period > clan_12hr ) {
                CLANV_D->clan_prestige();
                clan_12hr = time/period;
        }

        call_out( "clan", 600 );
}


void auto_reboot()
{
        object npc;
        //when 8'clock reboot
        //我只会用笨方法by bss
        if(uptime() > 4000 && (ctime(time())[11..12]=="08" ||
                               ctime(time())[11..12]=="20" )) {
                npc = new(NPC_DEMOGORGON);
                npc->move(REBOOT_PLACE);
                npc->start_shutdown(3);
        }
        else call_out("auto_reboot",60 );
}
void war_start()
{
 if(uptime() > 10000 && (ctime(time())[11..12]=="11" ||
                               ctime(time())[11..12]=="23" )) {
	shout(HIG"\n狂想空间北边关卡附近传来一声凄惨的哀嚎声\n\n"+
HIR"镇国侯奄奄一息的说道：\n\n"+
                             "臣镇守边关数十年，誓死保卫国家太平\n"+
                             "如今边关被破，臣有负皇上重托，唯有一死以谢天下\n\n"+
HIY"神秘剑客冷笑道：\n"+
                          HIC"流放边疆数十年，如今让我们重回中土，看来天下又要大乱了！哈哈哈！！！\n\n"+
						  "\t\t\t\n\n"NOR);
new("/open/dancer/npc/knight")->move("/open/main/room/r10");
   new("/open/dancer/npc/knight")->move("/open/main/room/s17");
   new("/open/dancer/npc/knight")->move("/open/main/room/r4");
   }
   else call_out("war_start",300);
}
void do_full()
{ 
  int i;
  object *user;
  user = users();
  if( ((time()+28800)%86400) < 28800 ) {
                call_out( "do_full", 3600+random(7200) );
                return;
        }
   message( "system",HIY+"你发现傅剑寒突然骑着五爪金龙出现在半空中。\n"+NOR , users() );
   message( "system",HIW+"只见傅剑寒唸了一句 撒拉 伊克 庵修姆。\n"+NOR, users());
   message( "system",HIM+"你忽然觉得精神百倍，信心大增。\n"+NOR, users());
   for( i=0; i<sizeof(user); i++ ) {
   user[i]->set("eff_gin",user[i]->query("max_gin"));
   user[i]->set("gin",user[i]->query("max_gin"));
   user[i]->set("eff_kee",user[i]->query("max_kee"));
   user[i]->set("kee",user[i]->query("max_kee"));
   user[i]->set("eff_sen",user[i]->query("max_sen"));
   user[i]->set("sen",user[i]->query("max_sen"));
   }
   call_out( "do_full", 3600+random(7200) );
}




void sp_boss()
{
        object npc1,npc2,npc3;

        if( uptime() > 34800 ) {
            shout(HIC"\n阵阵天惊地动... 英雄魂之道的武士们现世了\n\n"+
   "\t     其手中的剑向天下发出强势气压..\n"+
   "\t只见他傲视全狂想的一片大地, 感叹无人为其十合之众\n"+
   "\t狂想的勇士们来挑战他吧～～～～\n\n"+
   "\t\t\t\n\n"NOR);

            npc1 = new("/u/a/anmy/king/pope");
            npc2 = new("/u/a/anmy/king/master_teng");
            npc3 = new("/u/a/anmy/king/master_ba");
            npc1->move("/open/center/room/road1");
            npc2->move("/open/center/room/road1");
            npc3->move("/open/center/room/road1");
        }
        else call_out("sp_boss", 3600);
}


//
// FS 发钱系统
// made by konn
//
#ifdef SEND_MONEY
void send_money()
{
        object *user;
        int i, money, t_money, sub;

        if( uptime()/(10800-150*sizeof(users())) > send_money_time ) {
//
            shout(HIY"\n奉天承运, 皇帝召曰:\n\n"+
                  "\t宣  近日各地传德政频频, 为奖赏各地父母官, 特加\n"+
                  "\t薪饷, 各地钱庄亦加 1% 利息, 以回馈各地武林好友。\n\n"+
                  "\t\t\t\t\t\t\t钦此\n\n"NOR);
//
            send_money_time++;
            user = users();
            for(i=0; i<sizeof(user); i++) {
                if( !user[i]->query("id")          ||
                    wizardp(user[i])               ||
                    user[i]->query_temp("netdied") )
                    continue;
//
                if( !user[i]->query("bank/coin") ) {
                    user[i]->set("bank/coin", 50000);
                    continue;
                }

                money = 0;
                /* 二十万两黄金的银票取消
                t_money = user[i]->query("bank/silver");
                while( t_money-- ) {
                    money += 20000000;
                    if( money >= 2000000000 ) {
                        user[i]->add("bank/silver", 1);
                        money -= 2000000000;
                    }
                }
                */
                t_money = user[i]->query("bank/coin");
                t_money += t_money / 100;

                if( t_money >= 2000000000 ) {
                  /*原本的
                    user[i]->add("bank/silver", 1);
                    t_money -= 2000000000;
                  */
                    user[i]->set("bank/coin",2000000000);
                }
                if( (t_money+money) <= 0 || (t_money+money) >= 2000000000 ) {
                /*
                    sub = 2000000000 - t_money;
                    money -= sub;
                    user[i]->set("bank/coin", money);
                    user[i]->add("bank/silver", 1);
                */
                    user[i]->set("bank/coin",2000000000);
                }
                else user[i]->set("bank/coin", money+t_money);

//
            }
//
            if( send_money_time % 5 == 0 )
                call_out("find_the_best", 30);
//
        }
        call_out("send_money", 60);
}

void find_the_best()
{
        object *user, best;
        int i;

        for(i=0; i<sizeof(user); i++) {
            if( !user[i]->query("id")          ||
                wizardp(user[i])               ||
                user[i]->query_temp("netdied") )
                continue;
            if( !best ) {
                best = user[i];
                continue;
            }
            if( user[i]->query("combat_exp") > best->query("combat_exp") )
                best = user[i];
        }
        shout(HIY"㊣税官㊣：恭喜FS最强的玩家"+HIW+best->name()+HIY+
              ", 由于受到皇上的赏识, 赏赐五十两黄金及五百点潜能, "+
              "希望"+HIW+best->name()+HIW+"能够继续努力, 创造出更好"+
              "的成绩。"NOR);
        best->add("potential", 500);
        user[i]->pay_player(500000);
}
#endif

#ifdef WEATHER
void init_day_phase()
{
        mixed *local;
        int i, t;

        // Get minutes of today.
        local = localtime(time()*60);
        t = local[2] * 60 + local[1];           // hour * 60 + minutes

        // Find the day phase for now.
        for( i=0; i < sizeof(day_phase); i++)
                if( t >= day_phase[i]["length"] )
                        t -= (int)day_phase[i]["length"];

        // Since in our time scale, 1 minute == 1 second in RL, so we don't need
        // any conversion before using this number as call_out dalay, if you
        // changed the time scale, be sure to convert it.

        call_out("update_day_phase",
                (int)day_phase[(current_day_phase+1) % sizeof(day_phase)]["length"] - t);
}

void init_weather()
{
        weather_light = 1;
        call_out("update_weather", (int)weather[1]["length"] + random(31)-15);
}

void update_weather()
{
        int             r, t, tt;

        weather_hurt = 0;

        remove_call_out("update_weather");
        if ( c > 0 || (c == -1 && random(4)) ) {
          c = 0;
          tt = current_weather;
          // 尽量往好天气走
          r = random (12)-6;
          if (r > 0) r = 1; else if (r < 0) r = -1;
          t = tt + r;
          // 保证每次天气都不一样
          if ( t == tt )
            if (t >= 5) t--;
            else       t++;
          if (t < 0) t = 1;
          else if (t > 9) t = 8;
        }
        else
          t = random(5);

        current_weather = t;

// 这边会有问题

        if (!undefinedp(weather[current_weather]["weather_msg"]))
        message("outdoor:vision", weather[current_weather]["weather_msg"]+"("+
                current_weather+")。\n",
                users());
        if( !undefinedp(weather[current_weather]["event_fun"]) )
                call_other (this_object(),weather[current_weather]["event_fun"]);

        if ((c=weather[current_weather]["length"]) <= 0) {
          call_out("update_weather", 10+random(11));
        }
        else
          call_out("update_weather", weather[current_weather]["length"]+random(11));
}

void update_day_phase ()
{
        remove_call_out("update_day_phase");

        reclaim_objects();
        current_day_phase = (++current_day_phase) % sizeof(day_phase);
        message("outdoor:vision", day_phase[current_day_phase]["time_msg"] + "\n",
                users());
        if( !undefinedp(day_phase[current_day_phase]["event_fun"]) )
                call_other(this_object(), day_phase[current_day_phase]["event_fun"]);
        // 储存 clan 的 data
        CLAN_D->save();
        call_out("update_day_phase", day_phase[current_day_phase]["length"]);
}


// 雷雨一来就....hehe....
void event_thunder ()
{
  random(3)>0?weather_light = 1:weather_light=-1;
  message("outdoor:vision", "\n不远的高空画过一道闪电\n\n"+
          "不久后, 传来震耳欲聋的雷声....久久不绝....\n\n", users());
  call_out ("kill_badman", 3);
}

void kill_badman()
{
  object bad, *ob;
  int i, b, m, r,kee;

  remove_call_out ("kill_badman");

  m = 0;
  // 三次里有一次会打雷, 恶人会遭报应
  r = random(3);
  ob = users();
  if (r == 0) {
    for(i=0; i<sizeof(ob); i++) {
      if( !environment(ob[i]) ) continue;
      if( !environment(ob[i])->query("outdoors") ) continue;
      b = ob[i]->query("bellicosity");
      if (b > m) { m = b; bad = ob[i]; }
    }
    if (m != 0 && bad) {
      // bad->query_temp("thunder") 是避雷效果，给以后的避雷针用
      // 从 0% - 100 %
      m = bad->query_temp("thunder");
      r = bad->query("kee");
      if (m < 0) m = 0;
      if (m > 100) m = 100;
      // 杀孽太重会被雷劈
      //原本的完全没有散雷的作用..天呀...改
//    if( b > 500){
      if( b > 500 && m <random(100) ) {//看eq的机率.....
      if( !bad->is_fighting() && !bad->is_killing() ) {
        message("outdoor:vision",
          "霹雳的一声，跟着传来一道惊人的呼救声，看来是有人被雷击中了!!\n",
          ob, bad);
        tell_object (bad,
        "一道闪电从不远的天上直直的命中你，你身上到处都是闪电过后留下的焦痕。\n");
//      bad->set("bellicosity", bad->query("bellicosity")*7/10);
//      扣的太多,有玩家及巫师反应,调降
        bad->set("bellicosity", bad->query("bellicosity")*5/10);
        kee = bad->query("max_kee") * (100-m)/200;
        bad->receive_damage("kee", kee);
}
      }
    }
  }
  else
      message("outdoor:vision", "轰隆隆的雷声似乎渐渐远去.......\n", ob);
}

string outdoor_room_description()
{
  string msg;

  msg = "    " + weather[current_weather]["desc_msg"] + "。\n";

  // 坏天气看不到太阳，无法预测时间
  if (current_weather <= 5)
        msg += "    " + day_phase[current_day_phase]["desc_msg"] + "。\n";
  return msg;
}
#endif

string game_time()
{
        return CHINESE_D->chinese_date(time()*60);
}

#ifdef WEATHER
// This function is to read a regular type of data table for day_phase and
// etc.
mapping *read_table(string file)
{
        string *line, *field, *format;
        mapping *data;
        int i, rn, fn;

        line = explode(read_file(file), "\n");
        data = ({});
        for(i=0; i<sizeof(line); i++) {
                if( line[i]=="" || line[i][0]=='#' ) continue;
                if( !pointerp(field) ) {
                        field = explode( line[i], ":" );
                        continue;
                }
                if( !pointerp(format) ) {
                        format = explode( line[i], ":" );
                        continue;
                }
                break;
        }

        for( rn = 0, fn = 0; i<sizeof(line); i++) {
                if( line[i]=="" || line[i][0]=='#' ) continue;
                if( !fn ) data += ({ allocate_mapping(sizeof(field)) });
                sscanf( line[i], format[fn], data[rn][field[fn]] );
                fn = (++fn) % sizeof(field);
                if( !fn ) ++rn;
        }
        return data;
}


mapping *query_day_phase() { return day_phase; }

int query_weather_hurt() { return weather_hurt; }

void event_good_weather ()      { weather_hurt = 0; weather_light = 1; }
void event_water_weather()      { weather_hurt = 0; weather_light = -1; }
void event_light_rain ()        { weather_hurt = 1; weather_light = -1; }
void event_heave_rain ()        { weather_hurt = 2; weather_light = 0; }
void event_ice_rain ()          { weather_hurt = 3; weather_light = 1; }
void event_super_bad_weather () { weather_hurt = 4; weather_light = 0; }
#endif

int vision(object me)
{
  int           user, room, outdoors, rlight;
  object        env, *light;
  int           result;

  me = this_player();

  env = environment(me);

  if ( !env ) {
    me->move(VOID_OB);
    env = environment(me);
    if ( !env )
      return notify_fail ("你身处在虚无飘缈中，蒙蒙地一片，什么也没有。\n");
  }

  if (wizardp(me)) return 1;

#ifdef WEATHER
  // light 代表人物身上是否有照明设备, 变数名称取跟房间一样
  light = all_inventory(me);
  for (result=0; result<sizeof(light); result++)
    if (light[result]->query("light_up") == -1 ||
        light[result]->query("had_light")) return 1;

  // 三更半夜
  if (current_day_phase == 11) rlight = 0;
  else if (current_day_phase == 0  || current_day_phase == 1 ||
           current_day_phase == 10 || current_day_phase == 9  )
    // 天暗外加坏天气就看不见
    if (!weather_light) rlight = 0;
    // 天色昏暗
    else rlight = -1;
  // 坏天气就视线模糊
  else rlight = weather_light;
#endif

  // 表示室内或室外
  if (env->query("outdoors")) outdoors = 1;

  // light_up 是定义在房间里的变数, 代表有没有灯光
  // 室外这变数无效, 只跟天候有关
  else room = env->query("light_up");

  user = 0;
#ifdef WEATHER
  if (outdoors) user = rlight;
#else
  if (outdoors) user = 1;
#endif
  else user = room;

  return user;
}

void check_heart_beat()
{
        object *user;
        int i;

        user=users();
        if(sizeof(user) >0)
        for(i=0;i<sizeof(user);i++)
        {
                if(wizardp(user[i]) && user[i]->query("env/check_heart"));
                  "/adm/daemons/temp.c"->record_heart_beat(user[i]);
                if(query_heart_beat(user[i]))
                continue ;
                if(user[i]->query_temp("have_no_heart_beat"))
                continue ;
                if(!user[i]->query("id")) continue;
                if(geteuid(user[i])=="MudOS") continue;
                "/adm/daemons/temp.c"->record_heart_beat(user[i]);
        }
        call_out("check_heart_beat",1);
}

