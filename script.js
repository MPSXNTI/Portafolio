function mostrarSeccion(seccion) {
    var secciones = document.getElementsByTagName("section");
    for (var i = 0; i < secciones.length; i++) {
      secciones[i].style.display = "none";
    }
  
    document.getElementById(seccion).style.display = "block";
  
    var enlaces = document.getElementsByTagName("a");
    for (var i = 0; i < enlaces.length; i++) {
      enlaces[i].classList.remove("active");
    }
    document.getElementById(seccion + "-enlace").classList.add("active");
  }
  
  mostrarSeccion('home');