void main(){
  if (is_meeting){
    do_meeting();
  }
  if (is_work_day()){
    if (is_at_work){
      do_work_tasks();
    }
    else if (time_to_work <= 2h){
      prepare_to_leave_to_work();
    }
  } else if (time_to_work < 12h){
    wash_prep_drinks();
    go_to_bed();
  } else if (is_at_home){
    if (is_enough_energy() && is_enough_compute()){
      work_on_takuno_render();
    } else if (is_enough_energy() && is_chore(chore_list)) {
      do_chores(chore_list);
    } else {
      work_on_portage_update();
    }
  }
}
