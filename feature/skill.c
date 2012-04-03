// skill.c
// ������: ����ѧϰ֮����޷���ѧ��ԭ skill
// fixed by wade 1996 6 8

#include <ansi.h>
#include <dbase.h>

void create() {seteuid(getuid());}
// ѧ���� skill
mapping skills;
// skill ��ѧ�����, skills ��, �ڶ�������.
mapping learned;
// ʹ���е� skill
mapping skill_map;
// ѧ���� func
mapping func;
// ѧ�� func �����
mapping funcl;
mapping query_func() { return func; }
mapping query_funcl() { return funcl; }
mapping query_skills() { return skills; }
mapping query_learned() { return learned; }

void set_skill(string skill, int val)
{
  seteuid(getuid());
  if( !find_object(SKILL_D(skill))
  &&  file_size(SKILL_D(skill)+".c") < 0 )
        "/adm/daemons/tempd.c"->update_file(SKILL_D(skill)+".c");
          if( !find_object(SKILL_D(skill)) &&  file_size(SKILL_D(skill)+".c") < 0 )
    error("F_SKILL: No such skill (" + skill + ")\n");

  // �����Ѿ�������, ���޷���ѧϰ
  // ��� abandon ���������ĵ�, wade 1996 6 8
  // if (stringp(abandon) && strsrch (abandon, skill+"\n") != -1)
  //   return;

  if( !mapp(skills) ) skills = ([ skill: val ]);
  else skills[skill] = val;
}

int delete_skill(string skill)
{
  // int i, l;

  if( mapp(skills) ) {
    map_delete(skills, skill);

    // ���¼��ж���Ϊ����� abandon �����������ӵ�
    // by wade 1996 6 8
    // i = strsrch (abandon, skill+"\n");
    // l = strlen (skill+"\n");
    // if (i != -1)
    //   abandon = abandon[0..i-1] +
// 		abandon[i+l..<0];

    if( mapp(learned) ) {
      map_delete(learned, skill);
      return undefinedp(learned[skill]);
    }
    return undefinedp(skills[skill]);
  }
  return 0;
}

// This function 'map' a skill <skill> to another skill <mapped_to>.
// If 2nd argument not given, cancel the mapped skill <skill>.
varargs void map_skill(string skill, string mapped_to)
{
  if( !mapped_to && mapp(skill_map) ) {
    map_delete(skill_map, skill);
    return;
  }

  if( !find_object(SKILL_D(skill))
  &&  file_size(SKILL_D(skill)+".c") < 0 )
    error("F_SKILL: No such skill (" + skill + ")\n");

  if( !mapp(skills) || undefinedp(skills[mapped_to]) )
    return;
    
  if( !mapp(skill_map) ) skill_map = ([ skill: mapped_to ]);
  else skill_map[skill] = mapped_to;
}

string query_skill_mapped(string skill)
{
/*���õ�ӡ��ѶϢ
  printf ("skill_map=%O\nskill=%O\n",skill_map,skill);
*/
  if( mapp(skill_map) && !undefinedp(skill_map[skill]) )
    return skill_map[skill];
  return 0;
}

varargs int query_skill(string skill, int raw)
{
  if( !raw ) {
    int s;
    
    s = query_temp("apply/" + skill);
    if( mapp(skills) ) {
      s += skills[skill] / 2;
      if( mapp(skill_map) )
  s += skills[skill_map[skill]];
    }
    return s;
  }
  if( mapp(skills) && !undefinedp(skills[skill]) ) return skills[skill];
  return 0;
}

mapping query_skill_map()
{
  return skill_map;
}

int skill_death_penalty()
{
  string *sk;
  int i;

  if( wizardp(this_object()) || !mapp(skills) ) return 0;

  sk = keys(skills);
  if( !mapp(learned) )
    for(i = 0; i<sizeof(sk); i++) {
      skills[sk[i]]--;
      if( skills[sk[i]]<0 ) map_delete(skills, sk[i]);
    }
  else
    for(i = 0; i<sizeof(sk); i++) {
      if( (int)learned[sk[i]] > (skills[sk[i]]+1) * (skills[sk[i]]+1) / 2 )
  map_delete(learned, sk[i]);
      else {
  skills[sk[i]]--;
  if( skills[sk[i]]<0 ) map_delete(skills, sk[i]);
      }
    }
  skill_map = 0;
  return 1;
}

varargs void improve_skill( string skill, int amount, int weak_mode )
{
	int	spi, force, spell, magic;
	string	g;

	if( !find_object(SKILL_D(skill)) &&  file_size(SKILL_D(skill)+".c") < 0 )
        "/adm/daemons/tempd.c"->update_file(SKILL_D(skill)+".c");
          if( !find_object(SKILL_D(skill)) &&  file_size(SKILL_D(skill)+".c") < 0 )
		error( "F_SKILL: No such skill (" + skill + ")\n" );

	if( !weak_mode ) {
		if( !mapp(skills) )
			skills = ([]);
		if( undefinedp(skills[skill]) )
			skills[skill] = 0;
	}

    if(skill=="force" && this_object()->query_skill("force",1) >=400 &&
      !wizardp(this_object()))
    {
      return ;
    }
	g	= query("gender")=="����" ? "��": "��";
	spi	= query("spi");

	if( sizeof(learned) > spi )
		amount /= sizeof(learned) - spi;
	if( !amount )
		amount = 1;
	if( !mapp(learned) )
		learned = ([ skill : amount ]);
	else
		(int)learned[skill] += amount;

	if( !weak_mode && learned[skill] > (skills[skill]+3)*(skills[skill]+3) ) {
		skills[skill]++;
		learned[skill] = 0;
		if( skill == "force" ) {
			force = this_object()->query_skill( "force", 1 ) * 10;
			if( force > this_object()->query("max_force") )
				this_object()->set( "max_force", force );
		} 
		if( skill == "spells" ) {
			spell = this_object()->query_skill( "spells", 1 ) * 5;
			if( spell > this_object()->query("max_mana") )
				this_object()->set( "max_mana", spell );
		}
		if( skill == "magic" ) {
			magic = this_object()->query_skill( "magic", 1 ) * 5;
			if( magic > this_object()->query("max_atman") )
				this_object()->set( "max_atman", magic );
		}
		tell_object(this_object(), HIC + g + "�ġ�" + to_chinese(skill) + "�������ˣ�\n" NOR);
		SKILL_D(skill)->skill_improved(this_object());
	}
}

int abandon_skill(string skill)
{
  if (mapp(skills)) {
    if (undefinedp(skills[skill])) return 0;
    map_delete(skills, skill);
    if( mapp(learned) ) {
      map_delete(learned, skill);
      return undefinedp(learned[skill]);
    }
    return undefinedp(skills[skill]);
  }
  return 0;
}

int abandon_func(string funct)
{
  if (mapp(func)) {
    map_delete(func, funct);
    if( mapp(funcl) ) {
      map_delete(funcl, funct);
      return undefinedp(funcl[funct]);
    }
    return undefinedp(func[funct]);
  }
  return 0;
}

