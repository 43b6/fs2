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
        mail = ">>> ����һ������������·����, ���Ҫ����, ��ĵ�:\n>>> "+
               from+"\n>>> �������� imail ����.\n"+mail;
        seteuid (ROOT_UID);
        mailbox = new (MAILBOX_OB);
        cont = ([
          "from"        : from,
          "title"       : "������·�ż�",
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
        mail = ">>> ����һ������������·����, ���Ҫ����, ��ĵ�:\n>>> "+
               from+"\n"+mail;
        seteuid (ROOT_UID);
        mailbox = new (MAILBOX_OB);
        cont = ([
          "from"        : from,
          "title"       : "������·�ż�",
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

//�������ڿ���ʱ��Ҫ���е�code
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
                if(     wizardp(user[i])                        || // ��ʦ
                        user[i]->is_fighting()                  || // ս��
                        user[i]->query_temp("pk_fight")         || // pkla
                        user[i]->query_temp("unconcious")==1    || // �ε�
                        user[i]->query_temp("netdead")          || // ����
                        (query_idle(user[i])/60) > 1            || // ����
                        user[i]->is_ghost()                     || // ���
                        random(2)==1                            || // 50%
                        !user[i]->query("id")                      // login
                        )
                        continue;
                if(     in_edit(user[i]) || // �༭
                        in_input(user[i])){ // �Ķ�
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
            HIW + "\n\tϵͳҪ��������, ��ش���������:\n"+
            HIW + "\n***************************************************************\n");
    tell_object( ppl,
            sprintf("������ ans �ش���������ô���֣���\n%s", paper(""+ans)) );
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
                if(     user[i]->is_fighting()                  || // ս��
                        user[i]->query_temp("pk_fight")         || // pkla
                        user[i]->query_temp("unconcious")==1    || // �ε�
                        user[i]->query_temp("netdead")          || // ����
                        (query_idle(user[i])/60) > 1            || // ����
                        user[i]->is_ghost()                     || // ���
                        !user[i]->query("robot/ans")               // login
                        )
                        continue;
                if(     in_edit(user[i]) ||// �༭
                        in_input(user[i])){// �Ķ�
                        user[i]->set_temp("wait_get",1);
                        continue;
                }
                get_robot(user[i]);
        }
}
void get_robot(object ppl)
{
    if(!ppl) return ;
    tell_object( ppl, "���Ѿ�û�л���ش����⡣\n" );
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
void clan()     //���ɵ�ʱ���ж�
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
        //��ֻ���ñ�����by bss
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
	shout(HIG"\n����ռ䱱�߹ؿ���������һ����ҵİ�����\n\n"+
HIR"���������һϢ��˵����\n\n"+
                             "�����ر߹���ʮ�꣬������������̫ƽ\n"+
                             "���߹ر��ƣ����и��������У�Ψ��һ����л����\n\n"+
HIY"���ؽ�����Ц����\n"+
                          HIC"���ű߽���ʮ�꣬����������ػ�����������������Ҫ�����ˣ�������������\n\n"+
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
   message( "system",HIY+"�㷢�ָ�����ͻȻ������צ���������ڰ���С�\n"+NOR , users() );
   message( "system",HIW+"ֻ������������һ�� ���� ���� ����ķ��\n"+NOR, users());
   message( "system",HIM+"���Ȼ���þ���ٱ������Ĵ�����\n"+NOR, users());
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
            shout(HIC"\n�����쾪�ض�... Ӣ�ۻ�֮������ʿ��������\n\n"+
   "\t     �����еĽ������·���ǿ����ѹ..\n"+
   "\tֻ��������ȫ�����һƬ���, ��̾����Ϊ��ʮ��֮��\n"+
   "\t�������ʿ������ս���ɡ�������\n\n"+
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
// FS ��Ǯϵͳ
// made by konn
//
#ifdef SEND_MONEY
void send_money()
{
        object *user;
        int i, money, t_money, sub;

        if( uptime()/(10800-150*sizeof(users())) > send_money_time ) {
//
            shout(HIY"\n�������, �ʵ���Ի:\n\n"+
                  "\t��  ���ո��ش�����ƵƵ, Ϊ���͸��ظ�ĸ��, �ؼ�\n"+
                  "\tн��, ����Ǯׯ��� 1% ��Ϣ, �Ի����������ֺ��ѡ�\n\n"+
                  "\t\t\t\t\t\t\t�մ�\n\n"NOR);
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
                /* ��ʮ�����ƽ����Ʊȡ��
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
                  /*ԭ����
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
        shout(HIY"�I˰�٩I����ϲFS��ǿ�����"+HIW+best->name()+HIY+
              ", �����ܵ����ϵ���ʶ, �ʹ���ʮ���ƽ���ٵ�Ǳ��, "+
              "ϣ��"+HIW+best->name()+HIW+"�ܹ�����Ŭ��, ���������"+
              "�ĳɼ���"NOR);
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
          // ��������������
          r = random (12)-6;
          if (r > 0) r = 1; else if (r < 0) r = -1;
          t = tt + r;
          // ��֤ÿ����������һ��
          if ( t == tt )
            if (t >= 5) t--;
            else       t++;
          if (t < 0) t = 1;
          else if (t > 9) t = 8;
        }
        else
          t = random(5);

        current_weather = t;

// ��߻�������

        if (!undefinedp(weather[current_weather]["weather_msg"]))
        message("outdoor:vision", weather[current_weather]["weather_msg"]+"("+
                current_weather+")��\n",
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
        // ���� clan �� data
        CLAN_D->save();
        call_out("update_day_phase", day_phase[current_day_phase]["length"]);
}


// ����һ����....hehe....
void event_thunder ()
{
  random(3)>0?weather_light = 1:weather_light=-1;
  message("outdoor:vision", "\n��Զ�ĸ߿ջ���һ������\n\n"+
          "���ú�, �����������������....�þò���....\n\n", users());
  call_out ("kill_badman", 3);
}

void kill_badman()
{
  object bad, *ob;
  int i, b, m, r,kee;

  remove_call_out ("kill_badman");

  m = 0;
  // ��������һ�λ����, ���˻��ⱨӦ
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
      // bad->query_temp("thunder") �Ǳ���Ч�������Ժ�ı�������
      // �� 0% - 100 %
      m = bad->query_temp("thunder");
      r = bad->query("kee");
      if (m < 0) m = 0;
      if (m > 100) m = 100;
      // ɱ��̫�ػᱻ����
      //ԭ������ȫû��ɢ�׵�����..��ѽ...��
//    if( b > 500){
      if( b > 500 && m <random(100) ) {//��eq�Ļ���.....
      if( !bad->is_fighting() && !bad->is_killing() ) {
        message("outdoor:vision",
          "������һ�������Ŵ���һ�����˵ĺ����������������˱��׻�����!!\n",
          ob, bad);
        tell_object (bad,
        "һ������Ӳ�Զ������ֱֱ�������㣬�����ϵ�����������������µĽ��ۡ�\n");
//      bad->set("bellicosity", bad->query("bellicosity")*7/10);
//      �۵�̫��,����Ҽ���ʦ��Ӧ,����
        bad->set("bellicosity", bad->query("bellicosity")*5/10);
        kee = bad->query("max_kee") * (100-m)/200;
        bad->receive_damage("kee", kee);
}
      }
    }
  }
  else
      message("outdoor:vision", "��¡¡�������ƺ�����Զȥ.......\n", ob);
}

string outdoor_room_description()
{
  string msg;

  msg = "    " + weather[current_weather]["desc_msg"] + "��\n";

  // ������������̫�����޷�Ԥ��ʱ��
  if (current_weather <= 5)
        msg += "    " + day_phase[current_day_phase]["desc_msg"] + "��\n";
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
      return notify_fail ("����������Ʈ��У����ɵ�һƬ��ʲôҲû�С�\n");
  }

  if (wizardp(me)) return 1;

#ifdef WEATHER
  // light �������������Ƿ��������豸, ��������ȡ������һ��
  light = all_inventory(me);
  for (result=0; result<sizeof(light); result++)
    if (light[result]->query("light_up") == -1 ||
        light[result]->query("had_light")) return 1;

  // ������ҹ
  if (current_day_phase == 11) rlight = 0;
  else if (current_day_phase == 0  || current_day_phase == 1 ||
           current_day_phase == 10 || current_day_phase == 9  )
    // �찵��ӻ������Ϳ�����
    if (!weather_light) rlight = 0;
    // ��ɫ�谵
    else rlight = -1;
  // ������������ģ��
  else rlight = weather_light;
#endif

  // ��ʾ���ڻ�����
  if (env->query("outdoors")) outdoors = 1;

  // light_up �Ƕ����ڷ�����ı���, ������û�еƹ�
  // �����������Ч, ֻ������й�
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

