open! Core;
open! Incr_dom;
open! Js_of_ocaml;
module App = Hazelnut_lib.App;

Start_app.start(
  (module App),
  ~bind_to_element_with_id="app",
  ~initial_model=App.initial_model,
);
